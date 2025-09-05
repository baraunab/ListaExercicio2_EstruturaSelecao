/*28) Verificar se dados três valores inteiros quaisquer os mesmo formam um triângulo. 
Se formar informar o tipo, caso contrário, informar que os lados não formam um triângulo.*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variaveis
	int a, b, c, valorTemp, lados;
	
	//Entrada de dados
	printf("Informe os 3 lados do triangulo: ");
	scanf("%d %d %d", &a, &b, &c);
	//Processamento e saída
	if (a + b > c && b + c > a && a + c > b){
		printf("\nÉ um triangulo");
		if (a == b && b == c){
			printf("\n\tTriângulo equilátero");
		} else if (a == b || b == c || c == a){
			printf("\n\tTriângulo isósceles");
		} else {
			printf("\n\tTriangulo escaleno");
		}
	} else {
		printf("\n\tNão é triangulo válido!!!");
	}
	
	return 0;
}
