#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	int ano_atual, ano_nascimento, dias_vividos = 0;
		
	//entrada
	printf("..:: Calculadora de dias vividos ::.. \n");
	printf("Digite o ano atual:  ");
	scanf("%i", &ano_atual);
	printf("Digite o ano do seu nascimento:  ");
	scanf("%i", &ano_nascimento);
	
	//processamento
	dias_vividos = (ano_atual - ano_nascimento) * 365;
	
	//saida
	printf("Em anos inteiros, voce viveu aproximadamente: %i dias", dias_vividos);
	return 0;
}
