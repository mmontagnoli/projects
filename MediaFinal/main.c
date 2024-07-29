#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float atv1, ead1, av1, np1 = 0.0;
	float atv2, ead2, pluri, av2, np2, media_final = 0.0;
	
	//entrada
	printf("..:: Calculadora de Notas Faculdade Anchieta ::.. \n \n");
	printf("Digite o valor da nota da sua atividade 1: ");
	scanf("%f", &atv1);
	printf("Digite o valor da nota final da sua atividade EAD  1: ");
	scanf("%f", &ead1);
	printf("Digite o valor da nota da sua avaliacao 1: ");
	scanf("%f", &av1);
	printf("Digite o valor da nota da sua atividade 2: ");
	scanf("%f", &atv2);
	printf("Digite o valor da nota final da sua atividade EAD 2: ");
	scanf("%f", &ead2);
	printf("Digite o valor da nota da sua atividade pluri: ");
	scanf("%f", &pluri);
	printf("Digite o valor da nota da sua avaliacao 2: ");
	scanf("%f", &av2);
	
	//processamento
	np1 = (atv1 * 0.2) + (ead1 * 0.2) + (av1 * 0.6);
	np2 = (atv2 * 0.2) + (ead2 * 0.2) + (pluri * 0.2) + (av2 * 0.4);
	media_final = (np1 * 0.4) + (np2 * 0.6);
	
	
	//saida
	printf("\n");
	printf("Sua nota 1 do semestre foi: %f \n", np1);
	printf("Sua nota 2 do semestre foi: %f \n", np2);
	printf("Sua media final do semestre foi %f \n", media_final);

	return 0;
}
