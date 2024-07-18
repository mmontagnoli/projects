#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float nota1, nota2, nota3, media = 0.00;
	
	//entrada
	printf("..::Calculadora de Media Ponderada::.. \n \n");
	printf("Digite o valor da primeira nota :");
	scanf("%f", &nota1);
	printf("Digite o valor da segunda nota :");
	scanf("%f", &nota2);
	printf("Digite o valor da terceira nota :");
	scanf("%f", &nota3);
	
	//processamento
	media = (nota1 * 0.2) + ((nota2 * 30) / 100) + ((nota3 * 50) / 100);
	
	//saida
	printf("\n");
	printf("A media final, considerando o peso de cada nota sera: %0.2f", media);
	
	return 0;
}
