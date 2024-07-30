#include <stdio.h>
#include <stdlib.h>

/* 	Crie um programa que deverá solicitar dois valores inteiros
	quaisquer, o programa deverá verificar se os valores são iguais ou diferentes, e então deverá exibir
	mensagens informando essa análise */

int main(int argc, char *argv[]) {
	//variaveis]
	int n1, n2 = 0.0;
	
	//entrada
	printf("..:: Os numeros sao iguais? ::.. \n \n");
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	
	//processamento
	if (n1 == n2) {
		printf("\n");
		printf("Os numeros sao iguais");
	} else {
		printf("\n");
		printf("Os numeros sao diferentes");
	}
	
	//saida
	return 0;
}
