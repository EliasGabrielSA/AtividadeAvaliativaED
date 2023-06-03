#include <stdio.h>
#include "nutri.h"

void lerArquivoPacientes(FILE *ptrFile, Paciente vetPac[], int numPac)
{

	for (int i = 0; i < numPac; i++)
	{
		fscanf(ptrFile, "%s %f %f", vetPac[i].nome, &vetPac[i].altura, &vetPac[i].peso);
	}
}

void calcularIMC(Paciente *pac)
{
	pac->IMC = pac->peso / (pac->altura * pac->altura);
}

void mostrarDadosPaciente(Paciente pac)
{
	if (pac.IMC < 18.5)
	{
		printf("----------------------------------------\nNome   : %s\nPeso   : %.2f\nAltura : %.2f\nIMC    : %.2f\n\nClassificacao: Baixo peso\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
	else if (pac.IMC >= 18.5 && pac.IMC <= 24.99)
	{
		printf("----------------------------------------\nNome   : %s\nPeso   : %.2f\nAltura : %.2f\nIMC    : %.2f\n\nClassificacao: Peso normal\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
	else if (pac.IMC >= 25.0 && pac.IMC <= 29.99)
	{
		printf("----------------------------------------\nNome   : %s\nPeso   : %.2f\nAltura : %.2f\nIMC    : %.2f\n\nClassificacao: Sobrepeso\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
	else if (pac.IMC >= 30.0 && pac.IMC <= 39.99)
	{
		printf("----------------------------------------\nNome   : %s\nPeso   : %.2f\nAltura : %.2f\nIMC    : %.2f\n\nClassificacao: Obesidade\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
	else if (pac.IMC >= 40)
	{
		printf("----------------------------------------\nNome   : %s\nPeso   : %.2f\nAltura : %.2f\nIMC    : %.2f\n\nClassificacao: Obesidade grave\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
}
