#include <stdio.h>
#include <stdlib.h>

/* 	Crie um programa que deverá solicitar um determinado valor inteiro, o valor
	deverá ser verificado, caso seja um valor par deverá multiplicar por dois, caso o valor seja ímpar,
	deverá subtrair 3. O programa deverá exibir o resultado da operação realizada. */

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
