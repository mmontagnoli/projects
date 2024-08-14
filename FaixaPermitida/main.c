#include <stdio.h>
#include <stdlib.h>

/* 
	Ler um valor numérico inteiro que seja na faixa de valores de 1 até 9. O programa deve apresentar a 
	mensagem “O valor está na faixa permitida!”, caso o valor esteja fora da faixa deverá exibir a 
	mensagem “O valor informado não é permitido pois não está na faixa de 1 a 9”.
 */

int main(int argc, char *argv[]) {
	int valor = 0;
	
	printf("..:: FAIXA PERMITIDA ::.. \n \n");
	printf("Digite o valor a ser averiguado: ");
	scanf("%i", &valor);
	
	if (valor >= 1 && valor <= 9) {
		printf("\n");
		printf("O valor esta na faixa permitida!");
	} else {
		printf("\n");
		printf("O valor informado nao e permitido pois nao esta na faixa de 1 a 9");
	}
	
	return 0;
}
