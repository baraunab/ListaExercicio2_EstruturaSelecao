/*30. Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi
escolhido, atrav�s de perguntas e respostas. Animais poss�veis: le�o, cavalo, homem,
macaco, morcego, baleia, avestruz, pinguim, pato, �guia, tartaruga, crocodilo e cobra.
Exemplo:
� mam�fero? Sim; � quadr�pede? Sim ; � carn�voro? N�o ;
� herb�voro? Sim ; ent�o o animal escolhido foi o cavalo*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//Decla��o de vari�veis
	int escolha;
	
	//Entrada, Processamento e sa�da 
	printf("\nEscolha as op��es para chegar a uma conclus�o: ");
	printf("\n\t1 - Mam�fero \n\t2 - Aves \n\t3 - R�pteis\n");
	printf("\n\nOp��o: ");
	scanf("%i", &escolha);
	
	switch(escolha){
		//Mam�feros
		case 1 : 
			printf("\nEscolha as op��es dos Mam�feros: ");
			printf("\n\t1 - Quadr�pede \n\t2 - B�pede \n\t3 - Voadores \n\t4 - Aqu�tico");
			printf("\n\nOp��o: ");
			scanf("%i", &escolha);
			
			switch (escolha){
				case 1 : 
					printf("\nEscolha as op��es dos Quadr�pedes: ");
					printf("\n\t1 - Carn�voro \n\t2 - Herb�voro");
					printf("\n\nOp��o: ");
					scanf("%i", &escolha);
						
					if (escolha == 1)
						printf("\n\t\tSeu animal � Le�o");
					else if (escolha == 2)
						printf("\n\t\tSeu animal � Cavalo");
				break;

				case 2 : 
					printf("\nEscolha as op��es dos Voadores: ");
					printf("\n\t1 - On�voro \n\t2 - Frut�fero");
					printf("\n\nOp��o: ");
					scanf("%i", &escolha);	
					
					if (escolha == 1)
						printf("\n\t\tSeu animal � Homem");
					else if (escolha == 2)
						printf("\n\t\tSeu animal � Macaco ");
				break;

				case 3 : 
					printf("\n\t\tSeu animal � Morcego");
				break;
				
				case 4 : 
					printf("\n\t\tSeu animal � Baleia");
				break;
				
				default : printf("\nValor inv�lido!!!");
				
			}
			
		break; //case 1
			
		//Aves 
		case 2 : 
			printf("\nEscolha as op��es dos Aves: ");
			printf("\n\t1 - N�o-voadoras \n\t2 - Nadadoras \n\t3 - De Rapina");
			printf("\n\nOp��o: ");
			scanf("%i", &escolha);
			
			switch (escolha){
				case 1 : 
					printf("\nEscolha as op��es dos N�o-Voadores: ");
					printf("\n\t1 - Tropical \n\t2 - Polar");
					printf("\n\nOp��o: ");
					scanf("%i", &escolha);

					if (escolha == 1)
						printf("\n\t\tSeu animal � Avestruz");
					else if (escolha == 2)
						printf("\n\t\tSeu animal � Pinguim");
				break;
				
				case 2 :
					printf("\n\t\tSeu animal � Pato");
				break;
				
				case 3 : 
					printf("\n\t\tSeu animal � �guia");
				break;
				
				default : printf("\nValor inv�lido!!");

			}
			
		break; //case 2
		
		//R�pteis
		case 3 : 
			printf("\nEscolha as op��es dos R�pteis: ");
			printf("\n\t1 - Com casco \n\t2 - Carn�voro \n\t3 - Sem patas");
			printf("\n\nOp��o: ");
			scanf("%i", &escolha);
			
			switch (escolha){
				case 1 : 
					printf("\n\t\tSeu animal � Tartaruga");
				break;
			
				case 2 : 
					printf("\n\t\tSeu animal � Crocodilo");
				break;
				
				case 3 : 
					printf("\n\t\tSeu animal � Cobra");
				break;
				
				default : printf("\nValor inv�lido!!!");
				
			}
			
		break; //case 3
		
		default : ("\nValor inv�lido!!");
	}
	
	return 0;
}
