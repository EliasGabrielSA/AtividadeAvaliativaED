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

	Paciente *vetPac = calloc(numPac,sizeof(Paciente));
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

	lerArquivoPacientes(ptrfile, Paciente vetPac[numPac], numPac);

	for (int i = 0; i < numPac; i++)
	{
		vetPac[i].IMC = calcularIMC(Paciente vetPac[i]);
	}

	for (int i = 0; i < numPac; i++)
	{
		mostrarDadosPaciente(vetPac[i]);
	}

	free(vetPac);
	fclose(ptrfile);
}