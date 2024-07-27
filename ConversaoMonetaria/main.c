      #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float reais, euro, dolar, valor_dolar, valor_euro = 0.0;
	
	//entrada
	printf("..:: Calculadora de Dolar e Euro ::.. \n \n");
	printf("Digite o valor que voce tem em reais: ");
	scanf("%f", &reais);
	printf("Digite a cotacao do dolar: ");
	scanf("%f", &dolar);
	printf("Digite a cotacao do euro: ");
	scanf("%f", &euro);
	
	//processamento
	valor_dolar = reais / dolar;
	valor_euro = reais / euro;
	
	//saida
	printf("\n");
	printf("Voce tem %f dolares \n", valor_dolar);
	printf("Voce tem %f euros \n", valor_euro);
	
	return 0;
}
