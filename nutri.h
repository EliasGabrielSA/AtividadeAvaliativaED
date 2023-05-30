#ifndef NUTRI_H
#define NUTRI_H

struct _nutriPac
{
	char nome[30];
	double altura;
	double peso;
	double IMC;
};

typedef struct _nutriPac Paciente;
/*
	Prototipo para a funcao que tem por objetivo realizar a leitura
	de dados de uma quantidade equivalente a "numPac" do arquivo
	apontado pelo ponteiro de arquivo "ptrFile" e armazenar estes
	dados no vetor "vetPac".
	NAO modifique esta assinatura.
	A implementacao desta funcao devera ser realizada no arquivo "nutri.c"
*/
void lerArquivoPacientes(FILE *ptrFile, Paciente vetPac[], int numPac);

/*
	Prototipo para a funcao que calcula o IMC do paciente (pac) recebido
	por referencia no parametro.
	Voce devera completar a implementacao desta funcao.
	NAO modifique esta assinatura:
	A implementacao desta funcao devera ser realizada no arquivo "nutri.c"
*/
void calcularIMC(Paciente *pac);

/*
	Prototipo para a funcao que tem por finalidade mostrar os dados
	do paciente (pac) recebido por parametro.
	Ao implementar esta funcao no arquivo "nutri.c", esta devera mostrar
	as informações do paciente no seguinte formato:

	Nome  :   <nome_pac>
	Peso  :   <peso_pac>
	Altura: <altura_pac>
	IMC   :    <imc_pac>

	Classfificacao: <classific_pac>
	----------------------------------------

	O campo classificacao do paciente (<classific_pac>) devera
	obedecer as seguintes regras:

	IMC 				        Classificacao
	Menor que 18,5 		        Baixo peso
	Entre 18,5 e 24,9 	        Peso normal
	Entre 25,0 e 29,9 	        Sobrepeso
	Entre 30,0 e 39,9 	        Obesidade
	Maior ou igual a 40,0 		Obesidade grave

	Exemplo de saida:
	----------------------------------------
	Nome  : Rhoda
	Peso  : 73.00
	Altura: 1.83
	IMC   : 21.79

	Classfificacao: Peso normal
	----------------------------------------
	NÃO modifique esta assinatura
	A implementacao desta funcao devera ser realizada no arquivo "nutri.c"
*/
void mostrarDadosPaciente(Paciente pac);

#endif
