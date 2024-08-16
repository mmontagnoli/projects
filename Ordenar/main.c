#include <stdio.h>
#include <stdlib.h>

/* 
	Crie uma aplicação que solicite do usuário 3 valores inteiros quaisquer em qualquer ordem,
	os valores deverão ser apresentados ordenados.
 */

int main(int argc, char *argv[]) {
	int a, b, c = 0;
	
	printf("..:: ORDENACAO DE VALORES ::.. \n \n");
	printf("Digite o primeiro valor: ");
	scanf("%i", &a);
	printf("Digite o segundo valor: ");
	scanf("%i", &b);
	printf("Digite o terceiro valor: ");
	scanf("%i", &c);
	
	if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("\n");
    printf("Valores ordenados: %d, %d, %d", a, b, c);
    
    system("pause");
	return 0;
	
}


 










