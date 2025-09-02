/*19) Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas,
o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule
e imprima o salário a receber do funcionário seguindo as regras abaixo:

• o valor da hora trabalhada é igual a 1/5 do salário mínimo;
• o salário do mês é igual ao número de horas trabalhadas vezes o valor da hora trabalhada;
• para cada dependente acréscimo de 32 reais;
• para cada hora extra trabalhada o cálculo do valor da hora trabalhada acrescida de 50%;
• o salário bruto é igual ao salário do mês mais os valores dos dependentes mais os valores das horas extras;
• o cálculo do valor do imposto de renda retido na fonte segue a tabela abaixo:
		IRRF 		Salário bruto
		isento 		Inferior a 200
		10,00% 		de 200 até 500
		20,00% 		superior a 500
	
• o salário líquido é igual ao salário bruto menos IRRF;
• a gratificação segue a próxima tabela:
	Salário 			líquido Gratificação
	Até 350 			100 reais
	Superior a 350 		50 reais

• o salário a receber do funcionário é igual ao salário líquido mais a gratificação.*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaracao de variaveis
	float salario_min, horas_trabalhadas, hora_extra;
	float salario_liq = 0, valor_horas_trab = 0, salario_mensal = 0, acres_dependente = 0;
	float salario_bruto = 0, imposto_renda = 0, acres_hora_extra= 0;
	int numero_dependentes;
	
	//Entrada de dados
	printf("Informe o valor do salário minímo: ");
	scanf("%f", &salario_min);
	
	printf("Insira o numero de horas trabalhadas: ");
	scanf("%f", &horas_trabalhadas);
	
	printf("Insira o numero de horas extras trabalhadas: ");
	scanf("%f", &hora_extra);
	
	printf("Insira o número de dependentes: ");
	scanf("%d", &numero_dependentes);
	
	//valor das horas trabalhadas
	valor_horas_trab = salario_min * 0.2;
	
	//Salario mensal
	salario_mensal = horas_trabalhadas * valor_horas_trab;
	
	//acrescimo de dependetes
	acres_dependente = (numero_dependentes * 32);
	
	//acrescimo de hora extra
	acres_hora_extra = hora_extra * (valor_horas_trab * 1.5);
	
	//soma do salario mensal com acrescimos
	salario_bruto = salario_mensal + acres_dependente + acres_hora_extra; 
	
	//Imprime os dados 
	printf("\nSalario minimo: R&%.2f", salario_min);
	printf("\nValor das horas trabalhadas: R$%.2f", valor_horas_trab);
	printf("\nAcrescimo de dependente(s) - %d: R$%.2f", numero_dependentes, acres_dependente);
	printf("\nAcrescimo de hora extra: R$%.2f", acres_hora_extra);

	//Verifica o imposto a ser pago	
	if (salario_bruto < 200){	
		printf("\nIsento de Imposto de renda");
		salario_liq = salario_bruto;
	} else if (salario_bruto >= 200 && salario_bruto <= 500){
		imposto_renda = salario_bruto * 0.1;
		salario_liq = salario_bruto - imposto_renda;
		printf("\nDesconto do imposto de renda - R$ %.2f -> R$%.2f", imposto_renda, salario_bruto);	
	} else if (salario_bruto > 500){
		imposto_renda = salario_bruto * 0.2;
		salario_liq = salario_bruto - imposto_renda;
		printf("\nDesconto do imposto de renda - R$ %.2f -> R$%.2f", imposto_renda, salario_bruto);
	} else {
		printf("\nValor inválido");
	}
	
	//Verifica a gratificação
	if (salario_liq <= 350){
		printf("\nSalario liquido como gratificação de R$100: R$%.2f", salario_liq + 100);
	} else if (salario_liq > 350){
		salario_liq += 50;
		printf("\nSalario liquido como gratificação de R$50: R$%.2f", salario_liq + 50);
	}
	
	return 0;
}
