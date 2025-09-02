/* 27) O que será impresso depois de executado o seguinte algoritmo:
		a) num = 20
		b) num = -3
		c) num = 0
		leia(num)
		se num > 0 então
			quale = 'NUMERO POSITIVO'
		senão
	    	se num < 0 então
				quale = 'NUMERO NEGATIVO'
		    senão
		quale = 'zero';
		   fim se;
		fim se;
		escreva(quale);*/

#include <stdio.h>

int main (){
	int num;
	
	printf("Insira o valor de num: ");
	scanf("%d", &num);
	
	if (num > 0){
		printf("NUMERO POSITIVO");
	} else if (num < 0){
		printf("NUMERO NEGATIVO");
	} else 
		printf("ZERO");
	
	return 0;
}
