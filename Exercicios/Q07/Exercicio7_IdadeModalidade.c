/*7) Faça um programa que receba a idade de um nadador e imprima a sua categoria seguindo
as regras:
	
	categoria 		idade
	infantil A  	5 – 7 anos
	infantil B 		8 – 10 anos
	juvenil A 		11 – 13 anos
	juvenil B 		14 – 17 anos
	sênior 			maiores de 18 anos*/
#include <stdio.h>

int main (){
	//Declaração de variaveis
	int idade;
	
	//Entrada de dados - informando a idade
	printf("INFORME A IDADE: ");
	scanf("%d", &idade);
	
	switch (idade){
		case 5 :
		case 6 :
		case 7 : printf("%d ANOS - INFANTIL A"); break;
		case 8 : 
		case 9 :
		case 10 : printf("%d ANOS - INFANTIL B"); break;
		case 11 : 
		case 12 : 
		case 13 : printf ("%d ANOS - JUVENIL A"); break;
		case 14 :
		case 15 :
		case 16 :
		case 17 : printf ("%d ANOS - JUVENIL B"); break;
		case 18 : printf("%d ANOS - SENIOR"); break;
		default : printf("SENIOR");
		
	}
	
	
	
	return 0;	
}
