/*3) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de
permissão ou negação de acesso.*/
#include <stdio.h>

int main (){
	//Declaração de variáveis
	char dig1, dig2, dig3, dig4, dig5;
	
	//Entrada de dados - Informa a senha
	printf("Informe uma senha de 5 digitos\n");
	printf("Insira o digito 1: ");
	scanf("%s", &dig1);
	
	printf("Insira o digito 2: ");
	scanf("%s", &dig2);
	
	printf("Insira o digito 3: ");
	scanf("%s", &dig3);
	
	printf("Insira o digito 4: ");
	scanf("%s", &dig4);
	
	printf("Insira o digito 5: ");
	scanf("%s", &dig5);
	
	//Processamento/Saída de dados - Verifica a senha
	if (dig1 == 'A'){
		if (dig2 == 'S'){
			if (dig3 == 'D'){
				if (dig4 == 'F'){
					if (dig5 == 'G'){
						printf("Acesso autorizado !!!");
					} else { //Else de 'G'
						printf("Acesso negado");
					}
				} else { //Else de 'F'
					printf("Acesso negado");
					}
			} else { //Else de 'D'
				printf("Acesso negado");
				}
		} else { //Else de 'S'
			printf("Acesso negado");
			}
	} else { //Else de 'A'
		printf("Acesso negado");
	}

	return 0;
}
