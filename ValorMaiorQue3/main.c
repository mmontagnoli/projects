#include <stdio.h>
#include <stdlib.h>

/* 
	Ler um valor num�rico inteiro qualquer e fazer a sua apresenta��o caso o valor n�o seja maior que
	TRES. Utilize apenas o .n�o. (da tabela de operadores l�gicos) para a solu��o do problema. Aten��o
	para esse problema n�o deve ser utilizado os operadores relacionais
 */

int main(int argc, char *argv[]) {
	int valor = 0;
	
	printf("Digite um valor inteiro: ");
	scanf("%i", &valor);
	
	if (!(valor > 3)) {
		printf("\n");
		printf("O valor e %i", valor);
		
	} else {
		printf("\n");
		printf("Valor invalido");
	}
	
	
	return 0;
}
