#include <stdio.h>
#include <stdlib.h>

/* : Crie um programa que solicite tr�s valores inteiros, o programa dever�
	verificar se a soma dos dois primeiros valores � maior que o terceiro valor e ent�o apresentar
	mensagens informando tal an�lise. */

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
