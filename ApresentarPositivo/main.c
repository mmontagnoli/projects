#include <stdio.h>
#include <stdlib.h>

/* 	Ler um valor numérico inteiro positivo ou negativo e apresentar o valor
	lido como sendo um valor positivo, ou seja, se o valor lido for menor ou igual a zero, ele deve ser
	multiplicado por -1. */

int main(int argc, char *argv[]) {
	//variaveis
	int numero, negativo = 0;
	
	//entrada
	printf("..:: Conversor de Numero Negativo ::.. \n");
	printf("** Neste programa o seu numero negativo sera convertido em positivo ** \n \n");
	printf("Digite seu numero: ");
	scanf("%i", &numero);
	
	//processamento
	if (numero < 0) {
		negativo = (numero * -1);
		printf("\n");
		printf("O numero positivo e: %i", negativo);
	} else {
		printf("\n");
		printf("Seu numero ja e positivo: %i", numero);
	}
	
	//saida
	return 0;
}
