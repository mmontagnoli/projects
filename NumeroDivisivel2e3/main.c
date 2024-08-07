#include <stdio.h>
#include <stdlib.h>

/* 	Ler quatro valores numéricos inteiros e apresentar os
	valores que são divisíveis por 2 e 3 (pesquise por: “como obter o resto de uma divisão por inteiros”). */

int main(int argc, char *argv[]) {
	//variaveis
	int n1, n2, n3, n4 = 0;
	int res1, res2, res3, res4 = 0;
	
	//entrada
	printf("..:: Numeros divisiveis por 2 ou 3 ::.. \n \n");
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%i", &n3);
	printf("Digite o quarto numero: ");
	scanf("%i", &n4);
	
	//processamento
	res1 = (n1 % 2);
	res2 = (n2 % 2);
	res3 = (n3 % 2);
	res4 = (n4 % 2);
	
	
	//saida
	
	if (res1 == 0) {
		printf("\n");
		printf("%i e divisivel por 2", n1);
	} else {
		printf("\n");
		printf("%i e divisivel por 3", n1);
	}

	if (res1 == 0) {
		printf("\n");
		printf("%i e divisivel por 2", n2);
	} else {
		printf("\n");
		printf("%i e divisivel por 3", n2);
	}
	
	if (res1 == 0) {
		printf("\n");
		printf("%i e divisivel por 2", n3);
	} else {
		printf("\n");
		printf("%i e divisivel por 3", n3);
	}
	
	if (res1 == 0) {
		printf("\n");
		printf("%i e divisivel por 2", n4);
	} else {
		printf("\n");
		printf("%i e divisivel por 3", n4);
	}
	return 0;
}
