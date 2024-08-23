#include <stdio.h>
#include <stdlib.h>

/* 
		Crie uma aplicação que deve solicitar do usuário 5 valores inteiros
		quaisquer, a aplicação deverá apresentar duas mensagens de saída, a primeira deverá informar a
		quantidade de números pares e ímpares fornecidos, a segunda deverá informar qual foi o tipo de
		número (par/ímpar) mais fornecido. 
 */

int main(int argc, char *argv[]) {
	
	int v1, v2, v3, v4, v5 = 0;
	int par, impar = 0;
	
	printf("..:: CONTADOR PAR IMPAR ::.. \n \n");
	printf("Digite o primeiro valor: ");
	scanf("%d", &v1);
	printf("Digite o segundo valor: ");
	scanf("%d", &v2);
	printf("Digite o terceiro valor: ");
	scanf("%d", &v3);
	printf("Digite o quarto valor: ");
	scanf("%d", &v4);
	printf("Digite o quinto valor: ");
	scanf("%d", &v5);
	
	if (v1 % 2 == 0) {
		par += 1;
	} else {
		impar += 1;
	}
	
	if (v2 % 2 == 0) {
		par += 1;
	} else {
		impar += 1;
	}
	
	if (v3 % 2 == 0) {
		par += 1;
	} else {
		impar += 1;
	}
	
	if (v4 % 2 == 0) {
		par += 1;
	} else {
		impar += 1;
	}
	
	if (v5 % 2 == 0) {
		par += 1;
	} else {
		impar += 1;
	}

	printf("\n \n");	
	printf("Quantidade de numeros pares: %d", par);	
	printf("\n");
	printf("Quantidade de numeros impares: %d", impar);
	printf("\n \n");
	if (par > impar) {
		printf("O tipo de numero mais fornecido foi: PAR");
	} else {
		printf("O tipo de numero mais fornecido foi: IMPAR");
	}
	return 0;
}
