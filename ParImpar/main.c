#include <stdio.h>
#include <stdlib.h>

/* 

Ler um valor inteiro e apresentar uma mensagem informando se o valor é um número par ou ímpar. 

*/

int main(int argc, char *argv[]) {
	int valor = 0;
	
	printf("..:: PAR OU IMPAR ::.. \n \n");
	printf("Insira o numero: ");
	scanf("%i", &valor);
	
	
	if (valor % 2 == 0) {
		printf("\n \n");
		printf("O numero inserido e PAR!");
	} else {
		printf("\n \n");
		printf("O numero inserido e IMPAR!");
	}
	
	
	return 0;
}
