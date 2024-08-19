#include <stdio.h>
#include <stdlib.h>

/* 
	Crie uma aplicação que deverá solicitar do usuário uma idade qualquer
	(número inteiro), com base nessa idade, o sistema deverá exibir diferentes mensagens conforme a
	tabela a seguir: 
	a) Idade entre 0 e 10 anos - Olá criança, 
	b) Idade entre 11 e 14 anos - Olá, você é um(a) pré-adolescente; 
	c) Idade entre 15 e 18 anos - Parabéns, você já pode ser um eleitor; 
	d) Idade entre 19 e 21 anos - Hummm, você já é um adulto; 
	e) Acima de 21 anos - Bem, agora já está na hora de sair de casa e seguir sua vida...
 */

int main(int argc, char *argv[]) {
	int idade = 0;
	
	printf("..:: Digite sua idade e receba um RECADO ::.. \n \n");
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	if (idade >= 0 && idade <= 10) {
		printf("Ola crianca");
		
	} else {
		if (idade >= 11 && idade <= 14) {
		printf("\n");
		printf("Ola, voce e um(a) pre-adolescente");
		
		} else {
			if (idade >= 15 && idade <= 18) {
			printf("\n");
			printf("Parabens, voce ja pode ser um eleitor");
			
			} else {
				if (idade >= 19 && idade <= 21) {
				printf("\n");
				printf("Hummm, voce ja e um adulto");

				} else {
					if (idade > 21 ) {
					printf("\n");
					printf("Bem, agora ja esta na hora de sair de casa e seguir sua vida...");
					
					}
					
				}
				
			}			
			
		}
		
	}
	
	
	
	return 0;
}
