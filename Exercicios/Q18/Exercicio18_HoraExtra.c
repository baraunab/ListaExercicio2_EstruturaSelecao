/*18) Uma empresa decidiu dar uma gratificação de Natal aos seus funcionários, baseada no
número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor
do prêmio é obtido pela consulta na tabela a seguir, em que:

H = (número de horas extras) – (2/3*(número de horas-falta))
		H (minutos) 	Prêmio ($)
			   > 240 		500
		1800 __| 2400 		400
		1200 __| 1800 		300
		 600 __| 1200 		200
			<=   600 		100

Faça um programa que receba o número de horas extras e o número de horas- falta em minutos de um funcionário. 
Imprima o número de horas extras em horas, o número de horas, o número de horas-falta em horas e o valor do prêmio.*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaraçao de variaveis
	float horas_extras, horas_faltas, horas = 0, premio;
	
	//Entrada de dados
	printf("Informe o numero de horas extras em minutos: ");
	scanf("%f", &horas_extras);
	
	printf("Insira o numero de faltas em minutos: ");
	scanf("%f", &horas_faltas);
	
	//Processamento e saída de dados
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
