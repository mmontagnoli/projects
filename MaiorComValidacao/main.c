#include <stdio.h>
#include <stdlib.h>

/* 
	Crie uma aplicação que deverá solicitar do usuário dois valores numéricos
	inteiros quaisquer, essa deverá exibir na tela o maior valor informado no entanto antes de verificar
	qual o maior valor, a aplicação deverá validar se os valores são iguais, e caso sejam, deverá exibir uma
	mensagem ao usuário informando que valores iguais não é permitido.

*/

int main(int argc, char *argv[]) {
	int a, b = 0;
	
	printf("Digite o primeiro valor INTEIRO: ");
	scanf("%i", &a);
	printf("Digite o segundo valor INTEIRO: ");
	scanf("%i", &b);
	
	if (a == b) {
		printf("\n");
		printf("Os valores sao iguais, nao permitido!");
	} else {
		if (a > b) {
			printf("\n");
			printf("O maior valor e: %d", a);
			
		} else {
			printf("\n");
			printf("O maior valor e: %d", b);
		}
	}
	
	return 0;
}
