#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float mensalidade, atrasada, juros = 0.0;
	
	//entrada
	printf("..:: Calcular parcela Faculdade em Atraso ::.. \n \n");
	printf("Digite o valor da mensalidade: ");
	scanf("%f", &mensalidade);
	printf("Digite o percentual de juros que sera cobrado: ");
	scanf("%f", &juros);
	
	//processamento
	atrasada = mensalidade + ((mensalidade * juros) / 100);
	
	//saida
	printf("\n");
	printf("O valor da parcela atrasada sera de: %f reais", atrasada);
	return 0;
}
