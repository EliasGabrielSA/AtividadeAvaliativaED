/*
	Exercício Avaliativo 2
	Disciplina de Estruturas de Dados

	Aluno1: Elias Gabriel de Souza Andrade
	Aluno2: Pedro Poubel
*/
#include <stdio.h>
#include <stdlib.h>
#include "nutri.h"

int main(int argc, char *argv[])
{

	FILE *ptrfile;
	char path[100];
	int numPac;

	scanf("%s", path);
	scanf("%d", &numPac);

	Paciente *vetPac = calloc(numPac + 1,sizeof(Paciente));
	// Paciente *vetPointer = vetPac;

	if (numPac < 1)
	{
		printf("Informe um valor maior que 0.\n");
		return 0;
	}

	else if (numPac > 100)
	{
		printf("O valor informado deve estar no intervalo: 0 < valor <= 100\n");
		return 0;
	}

	ptrfile = fopen(path, "r");

	if (ptrfile == NULL)
	{
		printf("Arquivo nao encontrado.\n");
		return 0;
	}

	lerArquivoPacientes(ptrfile, vetPac, numPac);

	for (int i = 0; i < numPac; i++)
	{
		calcularIMC(&vetPac[i]);
	}

	for (int i = 0; i < numPac; i++)
	{
		mostrarDadosPaciente(vetPac[i]);
	}
	printf("----------------------------------------");

	free(vetPac);
	fclose(ptrfile);
}
