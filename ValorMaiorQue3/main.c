#include <stdio.h>
#include <stdlib.h>

/* 
	Ler um valor numérico inteiro qualquer e fazer a sua apresentação caso o valor não seja maior que
	TRES. Utilize apenas o .não. (da tabela de operadores lógicos) para a solução do problema. Atenção
	para esse problema não deve ser utilizado os operadores relacionais
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
