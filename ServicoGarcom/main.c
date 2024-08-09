#include <stdio.h>
#include <stdlib.h>

/* 	Crie um programa que solicite o valor individual gasto por três
	amigos em um restaurante, o programa também deverá solicitar se poderá ser acrescido os
	serviços de atendimento (10%) ao valor total da conta, no final o programa deverá exibir três
	informações, o valor total dos gastos, o valor do acréscimo dos serviços (este valor deverá ser 0.00
	ou 10% do valor total dos gastos) e o valor total da compra (valor total acrescido dos serviços). */

int main(int argc, char *argv[]) {
	
	float p1, p2, p3 = 0.00; 
	char servico ;
	float conta, totalconta, acrescimo = 0.00;
	
	
	printf("..:: CALCULADORA DE GASTOS RESTAURANTE ::.. \n \n");
	printf("Digite o valor gasto pela primeira pessoa: ");
	scanf("%f", &p1);
	printf("Digite o valor gasto pela segunda pessoa: ");
	scanf("%f", &p2);
	printf("Digite o valor gasto pela terceira pessoa: ");
	scanf("%f", &p3);
	
	printf("\n");
	printf("Deseja acrescentar os 10 porcento de atendimento na conta? (S/N): ");
	scanf("%s", &servico);
	printf("\n \n");
	
	conta = p1 + p2 + p3;
	
	if (servico == 's' || servico == 'S') {
		acrescimo = (conta * 0.10);
		totalconta = acrescimo + conta;		
		printf("O valor dos gastos foi: %0.3f \n \n", conta);
		printf("O valor do acrescimo foi: %0.3f \n \n", acrescimo);
		printf("O valor total foi: %0.3f \n \n", totalconta);
	} else {
		printf("O valor dos gastos foi: %0.3f \n", conta);
	}
	
	
	return 0;
}
