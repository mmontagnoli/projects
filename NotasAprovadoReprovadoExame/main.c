#include <stdio.h>
#include <stdlib.h>

/*  Ler os valores de quatro notas escolares de um aluno. 
	Calcular a média aritmética e apresentar a mensagem “aprovado” se a média obtida for maior ou igual a 7, caso contrário, 
	deve solicitar a nota de exame do aluno e calcular a nova média aritmética entre a nota de exame e a primeira média aritmética. 
	Se o valor da nova média for maior ou igual a 5, apresentar a mensagem “aprovado em exame”, caso
	contrário, apresentar a mensagem “reprovado”. Informar junto de cada mensagem o valor da
	média obtida. */

int main(int argc, char *argv[]) {
	//variaveis
	float nota1, nota2, nota3, nota4, media, media2, exame = 0.0; 
	
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
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	
	//saida
	printf("\n");
	if (media >= 7.00) {
		printf("Parabens! Voce foi APROVADO \n");
		printf("Media obtida: %0.1", media);
	} else {
		printf("Digite a nota do seu exame: ");
		scanf("%f", &exame);
		media2 = (exame + media) / 2;
		if (media2 >= 5) {
			printf("APROVADO pelo exame \n");
			printf("Media obtida pos exame: %0.1f", media2);
		} else {
			printf("REPROVADO! \n");
			printf("Media obtida pos exame: %0.1f", media2);
		}
	}

system("pause");
	return 0;
}

