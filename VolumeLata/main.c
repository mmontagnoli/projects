#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float raio, altura, volume = 0.0;
	
	//entrada
	printf("..:: Calculadora de Volume de uma Lata ::.. \n \n");
	printf("Digite o raio da lata em centimetros: ");
	scanf("%f", &raio);
	printf("Digite a altura da lata em centimetros: ");
	scanf("%f", &altura);
	
	//processamento
	volume = 3.14149 * ((raio *raio) * altura);
	
	//saida
	printf("\n");
	printf("O volume da lata e: %f cm3", volume);
	return 0;
}
