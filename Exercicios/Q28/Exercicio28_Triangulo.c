/*28) Verificar se dados tr�s valores inteiros quaisquer os mesmo formam um tri�ngulo. 
Se formar informar o tipo, caso contr�rio, informar que os lados n�o formam um tri�ngulo.*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de variaveis
	int a, b, c, valorTemp, lados;
	
	//Entrada de dados
	printf("Informe os 3 lados do triangulo: ");
	scanf("%d %d %d", &a, &b, &c);
	//Processamento e sa�da
	if (a + b > c && b + c > a && a + c > b){
		printf("\n� um triangulo");
		if (a == b && b == c){
			printf("\n\tTri�ngulo equil�tero");
		} else if (a == b || b == c || c == a){
			printf("\n\tTri�ngulo is�sceles");
		} else {
			printf("\n\tTriangulo escaleno");
		}
	} else {
		printf("\n\tN�o � triangulo v�lido!!!");
	}
	
	return 0;
}
