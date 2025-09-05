/*15) Faça um programa que mostre um menu com as seguintes opções:
	- soma
	- raiz quadrada
	- finalizar
O programa deve receber a opção desejada, receber os dados necessários para a
operação de cada opção, realizar a operação e imprimir o resultado. Na opção
finalizar nada deve acontecer.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
	//Função para usar caracteres da ling. portuguesa	
	setlocale(LC_ALL, "Portuguese");

	//Declaração de variáveis
	char opcao;
	double num1, num2, operacao = 0;

	//Entrada de dados - escolha do menu
	printf("Menu: \nS - soma \nR - Raiz Quadrada \nF - Finalizar programa\n\nEscolha uma opção: ");
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
		
		default : printf("\nValor Inválido!");
	}
	
	return 0;
}
