/*26) Escreva um programa que leia o valor de dois n�meros inteiros e a opera��o aritm�tica
desejada: calcule, ent�o, a reposta adequada. Utilize os s�mbolos da tabela a seguir para ler
qual a opera��o aritm�tica escolhida:

S�mbolo 	Opera��o aritm�tica
  + 		adi��o
  - 		subtra��o
  * 		multiplica��o
  / 		divis�o*/
  
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
