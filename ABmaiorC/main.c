#include <stdio.h>
#include <stdlib.h>

/* : Crie um programa que solicite três valores inteiros, o programa deverá
	verificar se a soma dos dois primeiros valores é maior que o terceiro valor e então apresentar
	mensagens informando tal análise. */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, resultado;
	
	scanf("%i", &n1);
	scanf("%i", &n2);
	scanf("%i", &n3);
	
	resultado = (n1 + n2);
	
	
	if (n1 + n2 > n3) {
		printf("A soma dos dois primeiros numeros e MAIOR que o terceiro numero! \n");
		printf("%i + %i = %i > %i ", n1, n2, resultado, n3);
	} else {
		printf("A soma dos dois primeiros numeros e MENOR que o terceiro numero! \n");
		printf("%i + %i = %i < %i ", n1, n2, resultado, n3);
	
	}
printf("\n");	
system("pause");
	
	return 0;
}
