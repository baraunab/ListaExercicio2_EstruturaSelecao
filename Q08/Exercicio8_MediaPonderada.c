/*8) No curso de Desenvolvimento de Software, a nota final do estudante � calculada a partir de
3 notas atribu�das respectivamente a um trabalho de laborat�rio, a uma avalia��o semestral
e a um exame final. As notas variam de 0 a 10 e a nota final � m�dia ponderada das 3 notas
mencionadas. A tabela a seguir fornece os pesos das notas:
	Laborat�rio   - peso 2
	Av. Semestral - peso 3	
	Exame final   - peso 5

Fa�a um programa que receba as 3 notas do estudante, calcule e imprima a m�dia final e o conceito desse estudante.
O conceito segue a tabela abaixo:
	 m�dia final 	 conceito
	8.0 |__| 10.0 		A
	7.0 |__  8.0 		B
	6.0 |__  7.0 		C
	5.0 |__  6.0 		D
		 <	 5.0 		E*/

#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	float nota_lab, nota_avaliacao, nota_exame, media_ponderada;
	
	//Entrada de dados - Informa as notas e pesos
	printf("Informe a nota de Laboratorio: ");
	scanf("%f", &nota_lab);
	
	printf("Informe a nota da Avaliacao Semestral: ");
	scanf("%f", &nota_avaliacao);
	
	printf("Informe a nota do Exame Final: ");
	scanf("%f", &nota_exame);
	
	media_ponderada = ((nota_lab * 2) + (nota_avaliacao * 3) + (nota_avaliacao * 5)) / (2 + 3 + 5);
	
	if(media_ponderada >= 8 && media_ponderada <= 10){
		printf("Conceito A");
	} else if (media_ponderada < 7 && media_ponderada >= 6)
	
	
	
	
	return 0;
}

