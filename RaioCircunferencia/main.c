#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float raio, area = 0.0;
	
	//entrada
	printf("..:: Calculadora de Area de Circunferencia ::.. \n \n");
	printf("Digite o valor do RAIO da circunferencia em cm: ");
	scanf("%f", &raio);
	
	//processamento
	area = 3.14 * (raio * raio);
	
	//saida
	printf("\n");
	printf("O valor da area da circunferencia sera: %f cm", area);
	return 0;
}
