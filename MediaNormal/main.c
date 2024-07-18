#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float nota1, nota2, nota3, media = 0.0;
	
	//entrada
	printf("..::Calculadora de media::.. \n \n");
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	//processamento
	media = (nota1 + nota2 + nota3) / 3;
	
	//saida
	printf("Sua media final e: %f", media);
	
	return 0;
}
