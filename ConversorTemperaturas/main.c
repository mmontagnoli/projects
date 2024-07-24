#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float cel, fah = 0.0;
	
	//entrada
	printf("..:: Transformador de Celsius para Fahrenheit ::.. \n \n");
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &cel);
	
	//processamento
	fah = (cel * 1.8) + 32;
	
	//saida
	printf("\n");
	printf("A temperatura de %f graus Celsius em Fahrenheit e: %f graus", cel, fah);
	return 0;
}
