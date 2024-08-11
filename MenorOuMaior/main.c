#include <stdio.h>
#include <stdlib.h>

/* 	Ler cinco valores numéricos inteiros, identificar e apresentar o maior e o menor valor informado dentre
	os valores lidos. Atenção, não deve ser realizada ordenação deles, não deve ser realizado uso de
	vetores e nem comandos de repetição */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, n5 = 0;
	int maior_valor, menor_valor = 0;
	
	printf("..:: Maior e Menor Valor ::.. \n \n");
	printf("Digite o valor 1: ");
	scanf("%i", &n1);
	printf("Digite o valor 2: ");
	scanf("%i", &n2);
	printf("Digite o valor 3: ");
	scanf("%i", &n3);
	printf("Digite o valor 4: ");
	scanf("%i", &n4);
	printf("Digite o valor 5: ");
	scanf("%i", &n5);
	
	maior_valor = n1;
	menor_valor = n1;
		
	if (maior_valor < n2) {
		maior_valor = n2;
	}
	
	if (maior_valor < n3) {
		maior_valor = n3;
	}
	
	if (maior_valor < n4) {
		maior_valor = n4;
	}
	
	if (maior_valor < n5) {
		maior_valor = n5;
	}
	
	if (menor_valor > n2) {
		menor_valor = n2;
	}
	
	if (menor_valor > n3) {
		menor_valor = n3;
	}
	
	if (menor_valor > n4) {
		menor_valor = n4;
	}
	
	if (menor_valor > n5) {
		menor_valor = n5;
	}
	
	printf("\n \n");
	printf("O maior valor e: %i \n", maior_valor);
	printf("O menor valor e: %i", menor_valor);
	
	
	
	
	return 0;
}
