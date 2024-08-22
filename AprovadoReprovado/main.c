#include <stdio.h>
#include <stdlib.h>

/* 
	Crie uma aplica��o que dever� solicitar do usu�rio (aluno) tr�s notas, sendo
	que a primeira corresponder� a nota da avalia��o 01, a segunda da avalia��o 02 e a terceira referente
	a entrega de um trabalho, com base nestas tr�s notas, aplique os seguintes pesos para calcular a m�dia:
	30%, 40% e 30%. 
	
	Com a m�dia calculada verifique se o aluno foi aprovado ou reprovado conforme orienta��es que seguem: 
	a) Se a m�dia estiver entre 0 e 4.99 - "Reprovado"; 
	b) Se a m�dia estiver entre 5.00 e 7.49 - "Aprovado"; 
	c) Se a m�dia estiver acima de 7.50 - "Parab�ns, voc� foi aprovado com excel�ncia".


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
