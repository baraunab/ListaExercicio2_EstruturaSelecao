/*1) Fa�a um programa que receba quatro notas de um aluno, calcule e imprima a m�dia aritm�tica
das notas e a mensagem de aprovado para m�dia superior ou igual a 7.0 ou a mensagem de
reprovado para m�dia inferior a 7.0.*/
#include <stdio.h>

int main (){
	//Declaracao de variaveis
	float nota1, nota2, nota3, nota4, media_aritimetica = 0;
	
	//Entrada de dados
	printf("\nENTRE COM QUATRO NOTAS\nINSIRA A PRIMEIRA NOTA: ");
	scanf("%f", &nota1);
	
	printf("INSIRA A SEGUNDA NOTA: ");
	scanf("%f", &nota2);
	
	printf("INSIRA A TERCEIRA NOTA: ");
	scanf("%f", &nota3);
	
	printf("INSIRA A QUARTA NOTA: ");
	scanf("%f", &nota4);
	
	//Processamento - calculo da m�dia aritim�tica
	media_aritimetica = (nota1 + nota2 + nota3 + nota4) / 4;
	
	//Sa�da de dados - Estrutura de sele��o: mostra se a m�dia obtida foi aprovada ou reprovada
	if (media_aritimetica >= 7 && media_aritimetica <= 10){
		printf("\nMEDIA: %.2f \nPARABENS!!!! VOCE FOI APROVADO", media_aritimetica);
	} else if (media_aritimetica < 7 && media_aritimetica >= 0){
		printf("\nMEDIA: %.2f \nREPROVADO.", media_aritimetica);
	} else {
		printf("VALOR INVALIDO!");
	}
	
	return 0;
}



