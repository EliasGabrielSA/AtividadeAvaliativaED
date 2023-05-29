/*
	Exercício Avaliativo 2
	Disciplina de Estruturas de Dados
	
	Aluno1: Elias Gabriel de Souza Andrade
	Aluno2: Pedro Poubel
*/
#include <stdio.h>
#include <stdlib.h>
#include "nutri.h"

int main(int argc, char* argv[]) {

	FILE *ptrfile;
	char path[100];
	int numPac;

	Paciente vetPac[numPac];
	Paciente *vetPacPointer = vetPac;
	//Paciente *vetPointer = vetPac;

	scanf("%s", path);
	scanf("%d", &numPac);

	ptrfile = fopen(path, "r");

	if (ptrfile == NULL) {
		printf("Arquivo nao encontrado.\n");
	} else if (numPac < 1) {
		printf("Informe um valor maior que 0.\n");
	} else if (numPac > 100) {
		printf("O valor informado deve estar no intervalo: 0 < valor <= 100\n");
	} else {
		lerArquivoPacientes(ptrfile, vetPac, numPac);

		for(int i = 0; i < numPac; i++) {
			vetPac[i].IMC = calcularIMC(&vetPacPointer[i]);
		}

		for(int i = 0; i < numPac; i++) {
			mostrarDadosPaciente(vetPac[i]);
		}
	}

	fclose(ptrfile);
}