#include <stdio.h>
#include <stdlib.h>

/* 
	Ler um valor num�rico inteiro que seja na faixa de valores de 1 at� 9. O programa deve apresentar a 
	mensagem �O valor est� na faixa permitida!�, caso o valor esteja fora da faixa dever� exibir a 
	mensagem �O valor informado n�o � permitido pois n�o est� na faixa de 1 a 9�.
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
