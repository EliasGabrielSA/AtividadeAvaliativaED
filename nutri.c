#include <stdio.h>
#include "nutri.h"

void lerArquivoPacientes(FILE *ptrFile, Paciente vetPac[], int numPac)
{

	for (int i = 0; i < numPac; i++)
	{
		fscanf(ptrFile, "%s %lf %d", vetPac[i].nome, &vetPac[i].altura, &vetPac[i].peso);
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
		printf("Nome  :   %s\nPeso  :    %i\nAltura: %.2f\nIMC   :    %.2f\n\nClassificacao: Baixo peso\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
	else if (pac.IMC >= 18.5 && pac.IMC <= 24.9)
	{
		printf("Nome  :   %s\nPeso  :    %i\nAltura: %.2f\nIMC   :    %.2f\n\nClassificacao: Peso normal\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
	else if (pac.IMC >= 25.0 && pac.IMC <= 29.9)
	{
		printf("Nome  :   %s\nPeso  :    %i\nAltura: %.2f\nIMC   :    %.2f\n\nClassificacao: Sobrepeso\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
	else if (pac.IMC >= 30.0 && pac.IMC <= 39.9)
	{
		printf("Nome  :   %s\nPeso  :    %i\nAltura: %.2f\nIMC   :    %.2f\n\nClassificacao: Obesidade\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
	else if (pac.IMC >= 40)
	{
		printf("Nome  :   %s\nPeso  :    %i\nAltura: %.2f\nIMC   :    %.2f\n\nClassificacao: Obesidade grave\n", pac.nome, pac.peso, pac.altura, pac.IMC);
	}
}
