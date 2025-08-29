/*12) Faça um programa que receba três notas de um aluno, calcule e imprima a média
aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
   Média 		Mensagem
0.0 |__ 5.0 	reprovado
5.0 |__ 7.0 	exame
7.0 |__| 10.0 	aprovado*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float nota1, nota2, nota3, media;
	
	//Entrada de dados - informa 3 notas
	printf("Informe as 3 notas separadamente: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	//Processamento e saída de dados - calcula media das notas e informa uma mensagem
	media = (nota1 + nota2 + nota3) / 3;
	printf("\nMedia: %.2f - ", media);
	
	if (media >= 0 && media < 5){
		printf("Reprovado");
	} else if (media >= 5 && media < 7){
		printf("Exame");
	} else if (media >= 7 && media <= 10){
		printf("Aprovado");
	} else {
		printf("Valor invalido");
	}
	
	return 0;
}
