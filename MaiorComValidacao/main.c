#include <stdio.h>
#include <stdlib.h>

/* 
	Crie uma aplica��o que dever� solicitar do usu�rio dois valores num�ricos
	inteiros quaisquer, essa dever� exibir na tela o maior valor informado no entanto antes de verificar
	qual o maior valor, a aplica��o dever� validar se os valores s�o iguais, e caso sejam, dever� exibir uma
	mensagem ao usu�rio informando que valores iguais n�o � permitido.

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
