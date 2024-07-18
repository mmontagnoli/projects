#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis 
	float nota1, nota2, nota3, nota4, media = 0.0;
	
	//entrada
	printf("..::Calculadora de Media Semestral::.. \n \n");
	printf("Digite o valor da nota 1 : ");
	scanf("%f", &nota1);
	printf("Digite o valor da nota 2 : ");
	scanf("%f", &nota2);
	printf("Digite o valor da nota 3 : ");
	scanf("%f", &nota3);
	printf("Digite o valor da nota 4 : ");
	scanf("%f", &nota4);
	
	//processamento
	media = ((nota1 * 10) / 100) + ((nota2 * 20) /100) + ((nota3* 30) / 100) + ((nota4 * 40) / 100);
	
	//saida
	printf("\n");
	printf("Sua media semestral sera: %f", media);
	
	return 0;
}
