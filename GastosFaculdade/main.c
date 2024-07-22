#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float mensalidade, transporte, alimentacao, mensal, anual = 0.00;
	
	//entrada
	printf("..:: Calculadora Custos Faculdade ::.. \n \n");
	printf("Digite o seu custo com a mensalidade da faculdade: ");
	scanf("%f", &mensalidade);
	printf("Digite o seu custo com o transporte mensal da faculdade: ");
	scanf("%f", &transporte);
	printf("Digite o seu custo com a alimentacao mensal na faculdade: ");
	scanf("%f", &alimentacao);
	
	//processamento
	mensal = mensalidade + transporte + alimentacao; 
	anual = mensal * 12;
	
	//saida
	printf("\n");
	printf("Seu custo mensal com a faculdade e de: %f reais \n", mensal);
	printf("Seu custo anual com a faculdade e de: %f reais", anual);
	
	return 0;
}
