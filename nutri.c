#include <stdio.h>

struct _nutriPac {
	char nome[30];
	double altura;
	double peso;
	double IMC;
};
typedef struct _nutriPac Paciente;

void lerArquivoPacientes(FILE *ptrFile, Paciente vetPac[], int numPac) {
    
    for(int i = 0; i < numPac; i++) {
        fscanf(ptrFile, "%[^,], %f, %f", vetPac[i].nome, vetPac[i].altura, vetPac[i].peso);
    }
}

void calcularIMC(Paciente *pac){
	return pac->peso / (pac->altura * pac->altura);
}

void mostrarDadosPaciente(Paciente pac) {
	char classific_pac[16];
	if(pac.IMC < 18.5) {
		classific_pac = "Baixo peso";
	} else if (pac.IMC >= 18.5 && pac.IMC <= 24.9) {
		classific_pac = "Peso normal";
	} else if (pac.IMC >= 25.0 && pac.IMC <= 29.9) {
		classific_pac = "Sobrepeso";
	} else if (pac.IMC >= 30.0 && pac.IMC <= 39.9) {
		classific_pac = "Obesidade";
	} else if (pac.IMC >= 40) {
		classific_pac = "Obesidade grave";
	}

	printf("Nome  :   %s\nPeso  :	%f\nAltura: %f\nIMC   :		%f\n\nClassificacao: %s\n", pac.nome, pac.peso, pac.altura, pac.IMC, classific_pac);
}