/*18) Uma empresa decidiu dar uma gratifica��o de Natal aos seus funcion�rios, baseada no
n�mero de horas extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor
do pr�mio � obtido pela consulta na tabela a seguir, em que:

H = (n�mero de horas extras) � (2/3*(n�mero de horas-falta))
		H (minutos) 	Pr�mio ($)
			   > 240 		500
		1800 __| 2400 		400
		1200 __| 1800 		300
		 600 __| 1200 		200
			<=   600 		100

Fa�a um programa que receba o n�mero de horas extras e o n�mero de horas- falta em minutos de um funcion�rio. 
Imprima o n�mero de horas extras em horas, o n�mero de horas, o n�mero de horas-falta em horas e o valor do pr�mio.*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	//Declara�ao de variaveis
	float horas_extras, horas_faltas, horas = 0, premio;
	
	//Entrada de dados
	printf("Informe o numero de horas extras em minutos: ");
	scanf("%f", &horas_extras);
	
	printf("Insira o numero de faltas em minutos: ");
	scanf("%f", &horas_faltas);
	
	//Processamento e sa�da de dados
	horas = horas_extras - ((2/3)*horas_faltas);
	
	printf("%.2f", horas);
	
	if (horas > 0 && horas <= 2400){
		premio = 500;
	} else if (horas > 1800 && horas <= 2400){
		premio = 400;
	} else if (horas > 1200 && horas <= 1800){
		premio = 300;	
	} else if (horas > 600 && horas <= 1200){
		premio = 200;	
	} else if (horas <= 600){
		premio = 100;
	} else {
		printf("\nVoce nao recebe premio.");
	}
	
	printf("\nNumero de horas extras: %.1f", horas_extras / 60);
	printf("\nNumero de horas: %.1f", horas / 60);
	printf("\nNumero de horas faltas: %.1f", horas_faltas / 60);
	printf("\nPremio: %.1f", premio);

	return 0;
}
