#include <stdio.h>
#include <stdlib.h>

/* 	Ler os valores de quatro notas escolares de um aluno.
	Calcular a média aritmética e apresentar a seguinte mensagem “aprovado” se a média obtida for
	maior ou igual a 6.0, caso contrário, apresentar a mensagem “reprovado”. Informar junto de cada
	mensagem o valor da média obtida */

int main(int argc, char *argv[]) {
	//variaveis
	float nota1, nota2, nota3, nota4, media = 0.0;
	
	//entrada
	printf("..:: Calculadora de Media ::.. \n \n");
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);
	printf("Informe a nota 3: ");
	scanf("%f", &nota3);
	printf("Informe a nota 4: ");
	scanf("%f", &nota4);
	
	//processamento
	
	media = (nota1 + nota2 + nota3 + nota4) / 4
	
	//saida
	printf("\n");
	if (media >= 6) {
		printf("Parabens! Voce foi APROVADO \n");
		printf("Media obtida = %0.1f", media);
	} else {
		printf("Voce foi REPROVADO! \n");
		printf("Media obtida = %0.1f", media);
	}
	
	
	return 0;
}
