#include <stdio.h>
#include <stdlib.h>

/* 
	Crie uma aplicação que deverá solicitar do usuário
	03 valores, assim que a aplicação contiver os três valores, ela deverá exibi-los em ordem crescente. A
	aplicação não deverá permitir que sejam fornecidos valores repetidos
	
 */

int main(int argc, char *argv[]) {
	
	float a, b, c = 0.00;
	
	printf("..:: VALORES EM ORDEM CRESCENTE ::.. \n \n");
	printf("Digite o primeiro valor: ");
	scanf("%f", &a);
	printf("Digite o segundo valor: ");
	scanf("%f", &b);
	printf("Digite o terceiro valor: ");
	scanf("%f", &c);
	
	
	if (a == b || a == c || c == b) {
		printf("\n");
		printf("Processo interrompido, valores repetidos!");
	} else {
			if (a > c) {
			float aux = a;
			a = c;
			c = aux;
		}
	
			if (a > b) {
			float aux = a;
			a = b;
			b = aux;
		}
	
			if (b > c) {
			float aux = b;
			b = c;
			c = aux;
		}
		
		printf("\n");
		printf("Valores em ordem crescente: %.2f -- %.2f -- %.2f", a, b, c);
		
	}
	
	printf("\n \n");
	system("pause");
	return 0;
}
