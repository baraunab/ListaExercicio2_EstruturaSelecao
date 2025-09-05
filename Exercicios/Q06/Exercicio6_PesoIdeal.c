/*6) Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu
peso ideal, utilizando as seguintes fórmulas:
	- para homens: (72.7 * H) - 58;
	- para mulheres: (62.1 * H) – 44.7.*/
	
#include <stdio.h>

int main (){
	//Declaração de variáveis
	char sexo;
	float altura, peso_ideal;
	
	//Entrada de dados - Informa sexo e altura
	printf("Informe seu sexo (M/F): ");
	scanf("%c", &sexo);
	
	printf("Informe sua altura: ");
	scanf ("%f", &altura);
	
	//Processamento/Saída de dados - calcula peso ideal de cada sexo e imprime	
	switch(sexo){
		case 'M' : 
		case 'm' : 
			peso_ideal = (72.7 * altura) - 58;
			printf("Peso ideal: %.2f kg", peso_ideal);
			break;	   
		case 'F' :
		case 'f' : 
			peso_ideal = (62.1 * altura) - 44.7;
			printf("Peso ideal: %.2f kg", peso_ideal);
			break;
		default : printf("Insira M/F");
	}
		
		return 0;
}
