/*17) Fa�a um programa que receba a medida de um �ngulo em graus, um n�mero inteiro.
Determine e imprima o quadrante em que se localiza este �ngulo. Considere os quadrantes
abaixo:
  �ngulo			 Quadrante
    0 |__ 90 		1o quadrante
   90 |__ 180 		2o quadrante
  180 |__ 270 		3o quadrante
  270 |__ 360 		4o quadrante
    0  __ -90 		1o quadrante
 -90  |__ -180 		2o quadrante
-180  |__ -270 		3o quadrante
-270  |__| -360 	4o quadrante
Para �ngulos maiores que 360 graus, reduza ao intervalo de 0 a 360.*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int angulo;
	
	//Entrada de dados - informa o angulo
	printf("Informe um angulo em graus: ");
	scanf("%i", &angulo);
	
		//Quadrante 
	if (angulo >= 0 && angulo < 90){
		printf("\nAngulo %i� - 1� quad0rante positivo", angulo);
	} else if(angulo >= 90 && angulo < 180){
		printf("\nAngulo %i� - 2� quadrante positivo", angulo);
	} else if (angulo >= 180 && angulo < 270){
		printf("\nAngulo %i� - 3� quadrante positivo", angulo);
	} else if (angulo > 270 && angulo <= 360) {
		printf("\nAngulo %i� - 4� quadrante positivo", angulo);
		
		//Quadrantes negativos
	} else if (angulo < 0 && angulo > -90){
		printf("\nAngulo %i� - 1� quadrante negativo", angulo);
	} else if(angulo <= 90 && angulo > -180){
		printf("\nAngulo %i� - 2� quadrante negativo", angulo);
	} else if (angulo <= 180 && angulo > -270){
		printf("\nAngulo %i� - 3� quadrante negativo", angulo);
	} else if (angulo < 270 && angulo >= -360) {
		printf("\nAngulo %i� - 4� quadrante negativo", angulo);
	} else {
		printf("\nValor inv�lido!!");
	}
	
	return 0;
}
