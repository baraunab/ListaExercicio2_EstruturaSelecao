/*25) Escreva um programa que calcule o que deve ser pago por um produto, considerando o
pre�o normal de etiqueta e a escolha da condi��o de pagamento. Utilize os c�digos da tabela
a seguir para ler qual a condi��o de pagamento escolhida e efetuar o c�lculo adequado:

	C�digo   	Condi��o de pagamento
		1 		� vista em dinheiro ou cheque, recebe 10% de desconto.
		2 		� vista no cart�o de cr�dito, recebe 5% de desconto.
		3 		Em 2 vezes, pre�o normal de etiqueta sem juros.
		4 		Em 3 vezes, pre�o normal de etiqueta mais juros de 10%.*/
#include <stdio.h>
int main (){
	float preco_etiqueta, preco_cond_pagamento, parcela;
	int codigo;
	
	printf("Insira o preco de etiqueta: ");
	scanf("%f", &preco_etiqueta);
	
	printf("\nEscolha uma condicao de pagamento: ");
	scanf("%d", &codigo);
	
	switch (codigo){
		case 1: 
			preco_cond_pagamento = preco_etiqueta - (preco_etiqueta * 0.1);
			printf("A vista no dinheiro/cheque, com 10%% de desconto: R$%.2f", preco_cond_pagamento);
			break;
		
		case 2: 
			preco_cond_pagamento = preco_etiqueta - (preco_etiqueta * 0.05);
			printf("A vista no cartao de credito, com 5%% de desconto: R$%.2f", preco_cond_pagamento);
			break;
		
		case 3: 
			preco_cond_pagamento = preco_etiqueta;
			parcela = preco_cond_pagamento / 2; 
			printf("Parcelado em duas vezes sem juros: R$%.2f", preco_cond_pagamento);
			printf("\n\t - Parcela: R$%.2f", parcela);
			break;
			
		case 4: 
			preco_cond_pagamento = preco_etiqueta + (preco_etiqueta * 0.1 * 3); //J = C . i . t - calculo de juros
			parcela = preco_cond_pagamento / 3;
			printf("Parcelado em tres vezes, 10%% de juros: R$%.2f", preco_cond_pagamento);
			printf("\n\t - Parcela: R$%.2f", parcela);
			break;
			
		default : printf("Valor invalido!!!"); 	
	}
	
	
	return 0;
}

