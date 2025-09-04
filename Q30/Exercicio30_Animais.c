/*30. Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi
escolhido, através de perguntas e respostas. Animais possíveis: leão, cavalo, homem,
macaco, morcego, baleia, avestruz, pinguim, pato, águia, tartaruga, crocodilo e cobra.
Exemplo:
é mamífero? Sim; é quadrúpede? Sim ; é carnívoro? Não ;
é herbívoro? Sim ; então o animal escolhido foi o cavalo*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//Declação de variáveis
	int escolha;
	
	//Entrada, Processamento e saída 
	printf("\nEscolha as opções para chegar a uma conclusão: ");
	printf("\n\t1 - Mamífero \n\t2 - Aves \n\t3 - Répteis\n");
	printf("\n\nOpção: ");
	scanf("%i", &escolha);
	
	switch(escolha){
		//Mamíferos
		case 1 : 
			printf("\nEscolha as opções dos Mamíferos: ");
			printf("\n\t1 - Quadrúpede \n\t2 - Bípede \n\t3 - Voadores \n\t4 - Aquático");
			printf("\n\nOpção: ");
			scanf("%i", &escolha);
			
			switch (escolha){
				case 1 : 
					printf("\nEscolha as opções dos Quadrúpedes: ");
					printf("\n\t1 - Carnívoro \n\t2 - Herbívoro");
					printf("\n\nOpção: ");
					scanf("%i", &escolha);
						
					if (escolha == 1)
						printf("\n\t\tSeu animal é Leão");
					else if (escolha == 2)
						printf("\n\t\tSeu animal é Cavalo");
				break;

				case 2 : 
					printf("\nEscolha as opções dos Voadores: ");
					printf("\n\t1 - Onívoro \n\t2 - Frutífero");
					printf("\n\nOpção: ");
					scanf("%i", &escolha);	
					
					if (escolha == 1)
						printf("\n\t\tSeu animal é Homem");
					else if (escolha == 2)
						printf("\n\t\tSeu animal é Macaco ");
				break;

				case 3 : 
					printf("\n\t\tSeu animal é Morcego");
				break;
				
				case 4 : 
					printf("\n\t\tSeu animal é Baleia");
				break;
				
				default : printf("\nValor inválido!!!");
				
			}
			
		break; //case 1
			
		//Aves 
		case 2 : 
			printf("\nEscolha as opções dos Aves: ");
			printf("\n\t1 - Não-voadoras \n\t2 - Nadadoras \n\t3 - De Rapina");
			printf("\n\nOpção: ");
			scanf("%i", &escolha);
			
			switch (escolha){
				case 1 : 
					printf("\nEscolha as opções dos Não-Voadores: ");
					printf("\n\t1 - Tropical \n\t2 - Polar");
					printf("\n\nOpção: ");
					scanf("%i", &escolha);

					if (escolha == 1)
						printf("\n\t\tSeu animal é Avestruz");
					else if (escolha == 2)
						printf("\n\t\tSeu animal é Pinguim");
				break;
				
				case 2 :
					printf("\n\t\tSeu animal é Pato");
				break;
				
				case 3 : 
					printf("\n\t\tSeu animal é Águia");
				break;
				
				default : printf("\nValor inválido!!");

			}
			
		break; //case 2
		
		//Répteis
		case 3 : 
			printf("\nEscolha as opções dos Répteis: ");
			printf("\n\t1 - Com casco \n\t2 - Carnívoro \n\t3 - Sem patas");
			printf("\n\nOpção: ");
			scanf("%i", &escolha);
			
			switch (escolha){
				case 1 : 
					printf("\n\t\tSeu animal é Tartaruga");
				break;
			
				case 2 : 
					printf("\n\t\tSeu animal é Crocodilo");
				break;
				
				case 3 : 
					printf("\n\t\tSeu animal é Cobra");
				break;
				
				default : printf("\nValor inválido!!!");
				
			}
			
		break; //case 3
		
		default : ("\nValor inválido!!");
	}
	
	return 0;
}
