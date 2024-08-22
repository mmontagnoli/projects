#include <stdio.h>
#include <stdlib.h>

/* 
	Crie uma aplicação que deverá solicitar do usuário (aluno) três notas, sendo
	que a primeira corresponderá a nota da avaliação 01, a segunda da avaliação 02 e a terceira referente
	a entrega de um trabalho, com base nestas três notas, aplique os seguintes pesos para calcular a média:
	30%, 40% e 30%. 
	
	Com a média calculada verifique se o aluno foi aprovado ou reprovado conforme orientações que seguem: 
	a) Se a média estiver entre 0 e 4.99 - "Reprovado"; 
	b) Se a média estiver entre 5.00 e 7.49 - "Aprovado"; 
	c) Se a média estiver acima de 7.50 - "Parabéns, você foi aprovado com excelência".


 */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, media = 0.00;
	
	printf("..:: CALCULADORA DE MEDIA ::.. \n \n");
	printf("Digite sua nota da AVALIACAO 01: ");
	scanf("%f", &n1);
	printf("Digite sua nota da AVALIACAO 02: ");
	scanf("%f", &n2);
	printf("Digite sua nota do TRABALHO: ");
	scanf("%f", &n3);
	
	media = (n1 * 0.3) + (n2 * 0.4) + (n3 * 0.3);
	
	if (media >= 0 && media <= 4.99) {
		printf("\n");
		printf("Sua media foi: %0.2f", media);
		printf("\n \n");
		printf("Resultado => Reprovado");
	}
	
	if (media >= 5 && media <= 7.49) {
		printf("\n");
		printf("Sua media foi: %0.2f", media);
		printf("\n \n");
		printf("Resultado => Aprovado");
	}
	
	if (media > 7.50) {
		printf("\n");
		printf("Sua media foi: %0.2f", media);
		printf("\n \n");
		printf("Resultado => Parabens, voce foi aprovado com excelencia");
	}

	
	
	return 0;
}
