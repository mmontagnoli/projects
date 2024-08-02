#include <stdio.h>
#include <stdlib.h>

/*  Crie um programa que leia dois valores numéricos inteiros quaisquer
	em qualquer ordem, o programa dever
	á identificar qual é o menor e maior valor, e então deverá
	exibir o valor da diferença de valor subtraindo o menor valor do maior valor */

int main(int argc, char *argv[]) {
	//variaveis
	int n1, n2 = 0.0;
	int res1, res2 = 0.0;
	
	//entrada
	printf("..:: Calculo de diferenca de 2 numeros ::.. \n \n");
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	
	//processamento
	if (n1 > n2) {
		res1 = n1 - n2;
		printf("\n");
		printf("O resultado da conta e: %i", res1);		
	} else {
		res2 = n2 - n1;
		printf("\n");
		printf("O resultado da conta e: %i", res2);
	}
	
	//saida
	return 0;
}
