#include <stdio.h>
#include <stdlib.h>

/* 	Crie um programa que dever� solicitar dois valores inteiros
	quaisquer, o programa dever� verificar se os valores s�o iguais ou diferentes, e ent�o dever� exibir
	mensagens informando essa an�lise */

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
