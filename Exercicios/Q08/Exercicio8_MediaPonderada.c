/*8) No curso de Desenvolvimento de Software, a nota final do estudante é calculada a partir de
3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. As notas variam de 0 a 10 e a nota final é média ponderada das 3 notas
mencionadas. A tabela a seguir fornece os pesos das notas:
	Laboratório   - peso 2
	Av. Semestral - peso 3	
	Exame final   - peso 5

Faça um programa que receba as 3 notas do estudante, calcule e imprima a média final e o conceito desse estudante.
O conceito segue a tabela abaixo:
	 média final 	 conceito
	8.1 |__| 10.0 		A
	7.1 |__  8.0 		B
	6.1 |__  7.0 		C
	5.0 |__  6.0 		D
		 <	 5.0 		E*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float nota_lab, nota_avaliacao, nota_exame, media_ponderada;
	
	//Entrada de dados - Informa as notas e pesos
	printf("Informe a nota de Laboratorio: ");
	scanf("%f", &nota_lab);
	
	printf("Informe a nota da Avaliacao Semestral: ");
	scanf("%f", &nota_avaliacao);
	
	printf("Informe a nota do Exame Final: ");
	scanf("%f", &nota_exame);
	
	//Processamento e Saída de dados - calcula media ponderada das notas e verifica qual o conceito
	media_ponderada = ((nota_lab * 2) + (nota_avaliacao * 3) + (nota_avaliacao * 5)) / (2 + 3 + 5);

	printf("\nMedia do aluno: %.2f - ", media_ponderada);
	if(media_ponderada <= 10  && media_ponderada > 8){
		printf("Conceito A");
	} else if (media_ponderada <= 8 && media_ponderada > 7){
		printf("Conceito B");
	} else if (media_ponderada <= 7 && media_ponderada > 6) {
		printf ("Conceito C");
	} else if (media_ponderada <= 6 && media_ponderada > 5){
		printf("Conceito D");
	} else if (media_ponderada <= 5 && media_ponderada >= 0) {
		printf("Conceito E");
	} else {
		printf("\nValor Invalido!!");
	}

	return 0;
}

