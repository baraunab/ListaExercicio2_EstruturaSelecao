/*3) Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha �
um conjunto de caracteres que s�o: 'ASDFG'. O programa deve imprimir mensagem de
permiss�o ou nega��o de acesso.*/
#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	char senha[20];
	
	//Entrada de dados - Informa a senha
	printf("Insira a senha: ");
	scanf("%s", &senha);
	
	//Processamento/Sa�da de dados - Verifica a senha
	if (senha[0] == 'A'){
		if (senha[1] == 'S'){
			if (senha[2] == 'D'){
				if (senha[3] == 'F'){
					if (senha[4] == 'G'){
						printf("Acesso autorizado !!!");
					} else { //Else de 'G'
						printf("Acesso negado !!!");
					}
				} else { //Else de 'F'
					printf("Acesso negado !!!");
					}
			} else { //Else de 'D'
				printf("Acesso negado !!!");
				}
		} else { //Else de 'S'
			printf("Acesso negado !!!");
			}
	} else { //Else de 'A'
		printf("Acesso negado !!!");
	}

	return 0;
}
