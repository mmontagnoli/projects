#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 	Ler três valores numérico (representados por a, b, c) e efetuar o cálculo da
	equação completa de segundo grau utilizando a formula de baskara (considere todas as possíveis
	condições para delta: delta < 0, delta > 0 e delta = 0). Lembre-se de que é completa a equação de
	segundo grau que possui simultaneamente as variáveis A, B e C diferentes de zero */

int main(int argc, char *argv[]) {
	//variaveis
	float a, b, c, delta, raiz, x1, x2 = 0.0;
	
	//entrada
	printf("..:: Calculadora de Baskara ::.. \n \n");
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	//processamento
	delta = (b * b) - (4 * a * c);
	raiz = sqrt(delta);
	x1 = (-b + raiz) / (2 * a);
	x2 = (-b - raiz) / (2 * a);
	
	//saida
	if (a == 0) {
		printf("\n");
		printf("Nao e possivel realizar a conta, A = 0");
	} else {
		if (delta < 0) {
			printf("\n");
			printf("Nao e possivel realiar a conta, Delta < 0");
		} else {
			printf("\n");
			printf("A primeira raiz e: %0.1f \n", x1);
			printf("A primeira raiz e: %0.1f", x2);
		}
	}
	
	return 0;
}
