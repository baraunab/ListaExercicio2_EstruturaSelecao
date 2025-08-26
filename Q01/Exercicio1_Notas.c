/*1) Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
reprovado para média inferior a 7.0.*/
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
	
	//Processamento - calculo da média aritimética
	media_aritimetica = (nota1 + nota2 + nota3 + nota4) / 4;
	
	//Saída de dados - Estrutura de seleção: mostra se a média obtida foi aprovada ou reprovada
	if (media_aritimetica >= 7 && media_aritimetica <= 10){
		printf("\nMEDIA: %.2f \nPARABENS!!!! VOCE FOI APROVADO", media_aritimetica);
	} else if (media_aritimetica < 7 && media_aritimetica >= 0){
		printf("\nMEDIA: %.2f \nREPROVADO.", media_aritimetica);
	} else {
		printf("VALOR INVALIDO!");
	}
	
	return 0;
}



