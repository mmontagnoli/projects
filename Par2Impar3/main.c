#include <stdio.h>
#include <stdlib.h>

/* 	Crie um programa que dever� solicitar um determinado valor inteiro, o valor
	dever� ser verificado, caso seja um valor par dever� multiplicar por dois, caso o valor seja �mpar,
	dever� subtrair 3. O programa dever� exibir o resultado da opera��o realizada. */

int main(int argc, char *argv[]) {
	//variaveis
	int numero, resultado, par, impar = 0.0;
	
	//entrada 
	printf("..:: Numero Par * 2, Numero Impar - 3 ::.. \n \n");
	printf("Digite o numero: ");
	scanf("%i", &numero);
	
	//processamento
	resultado = (numero % 2);
	
	//saida
	if (resultado != 0) {
		impar = (numero - 3);
		printf("\n");
		printf("O resultado do calculo e: %i", impar);		
	} else {
		par = (numero * 2);
		printf("\n");
		printf("O resultado do calculo e: %i", par);
	}
	
	return 0;
}
