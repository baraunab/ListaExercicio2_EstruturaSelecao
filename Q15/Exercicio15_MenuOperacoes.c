/*15) Fa�a um programa que mostre um menu com as seguintes op��es:
	- soma
	- raiz quadrada
	- finalizar
O programa deve receber a op��o desejada, receber os dados necess�rios para a
opera��o de cada op��o, realizar a opera��o e imprimir o resultado. Na op��o
finalizar nada deve acontecer.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
	//Fun��o para usar caracteres da ling. portuguesa	
	setlocale(LC_ALL, "Portuguese");

	//Declara��o de vari�veis
	char opcao;
	double num1, num2, operacao = 0;

	//Entrada de dados - escolha do menu
	printf("Menu: \nS - soma \nR - Raiz Quadrada \nF - Finalizar programa\n\nEscolha uma op��o: ");
	scanf("%c", &opcao);
		
	switch(opcao){
		case 's' :
		case 'S' :
			printf("Informe dois numeros para serem somados: ");
			scanf ("%lf %lf", &num1, &num2);
			
			operacao = num1 + num2;
			
			printf("%.2lf + %.2lf = %.2lf", num1, num2, operacao);
			
			break;
		
		case 'R' :
		case 'r' :
			printf("Informe o radicando para calcular raiz quadrada: ");
			scanf("%lf", &num1);
			
			operacao = sqrt(num1);
			
			printf("Raiz quadrada de %.2lf = %.2lf", num1, operacao);
		
			break;
			
		case 'f' :
		case 'F' :
			printf("Saindo...");
			break;
		
		default : printf("\nValor Inv�lido!");
	}
	
	return 0;
}
