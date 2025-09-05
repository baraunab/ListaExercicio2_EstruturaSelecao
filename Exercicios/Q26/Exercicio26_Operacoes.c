/*26) Escreva um programa que leia o valor de dois números inteiros e a operação aritmética
desejada: calcule, então, a reposta adequada. Utilize os símbolos da tabela a seguir para ler
qual a operação aritmética escolhida:

Símbolo 	Operação aritmética
  + 		adição
  - 		subtração
  * 		multiplicação
  / 		divisão*/
  
#include <stdio.h>

int main (){
	int n1, n2, operacao = 0;
	char opcao[1];
		
	printf("\n+ : Adicao \n- : Subtracao \n* : Multiplicacao \n/ : Divisao \n");
	
	printf("\nSelecione uma das opcoes: ");
	fgets(opcao, 2, stdin);
	
	printf("Informe dois valores: ");
	scanf("%d %d", &n1, &n2);

	switch(opcao[0]){
		case '+' : 
			operacao = n1 + n2;
			printf("\nAdicao: %d + %d = %d", n1, n2, operacao);
			break;
			
		case '-' :
			operacao = n1 - n2;
			printf("\nSubtracao: %d - %d = %d", n1, n2, operacao);
			break;
			
		case '*' : 
			operacao = n1 * n2;
			printf("\nMultiplicacao: %d * %d = %d", n1, n2, operacao);
			break;
			
		case '/' :
			operacao = n1 / n2;
			printf("\nDivisao: %d / %d = %d", n1, n2, operacao);
			break;	
			
		default: printf("\nOperacao invalida!!");
	}
	
	
	return 0;
}
