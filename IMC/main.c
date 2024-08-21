#include <stdio.h>
#include <stdlib.h>

/* 
	Crie uma aplicação para realizar o cálculo do IMC, a aplicação deverá solicitar do usuário o Peso
	e a Altura, deverá então processar o Índice de Massa Corporal, e com esse valor exibir as mensagens
	de acordo com a tabela de classificação de IMC (Pesquise como calcular o IMC)
	
	<16 	     = Magreza grau III
	16 a 16,9	 = Magreza grau II
	17 a 18,4	 = Magreza grau I
	18,5 a 24,9  = Eutrofia
	25 a 29,9    = Pré-Obesidade
	30 a 34,9 	 = Obesidade moderada (grau I)
	35 a 39,9 	 = Obesidade severa (grau II)
	>= 40 		 = Obesidade muito severa (grau III)
 */

int main(int argc, char *argv[]) {
	float peso, altura = 0.0;
	float imc = 0.0;
	
	printf("..:: CALCULADORA DE IMC ::.. \n \n");
	printf("Digite o seu peso(kg): ");
	scanf("%f", &peso);
	printf("Digite a sua altura(m): ");
	scanf("%f", &altura);
	
	imc = (peso / (altura * altura));
	
	if (imc < 16) {
		printf("\n");
		printf("IMC = %.2f kg/m -> Magreza grau III", imc);
	} else {
		if (imc >= 16 && imc <= 16.9 ) {
			printf("\n");
			printf("IMC = %.2f kg/m -> Magreza grau II", imc);	
		} else {
			if (imc >= 17 && imc <= 18.4 ) {
				printf("\n");
				printf("IMC = %.2f kg/m -> Magreza grau I", imc);
			} else {
				if (imc >= 18.5 && imc <= 24.9 ) {
					printf("\n");
					printf("IMC = %.2f kg/m -> Eutrofia", imc);					
				} else {
					if (imc >= 25 && imc <= 29.9 ) {
						printf("\n");
						printf("IMC = %.2f kg/m -> Pre-Obesidade", imc);			
					} else {
						if (imc >= 30 && imc <= 34.9 ) {
							printf("\n");
							printf("IMC = %.2f kg/m -> Obesidade moderada (grau I)", imc);
						} else {
							if (imc >= 35 && imc <= 39.9 ) {
								printf("\n");
								printf("IMC = %.2f kg/m -> Obesidade severa (grau II)", imc);
							} else {
								if (imc >= 40) {
									printf("\n");
									printf("IMC = %.2f kg/m -> Obesidade muito severa (grau III)", imc);
									
								}
							}
							
						}
					}
					
				}
				
			}
			
		}
	}

	return 0;
}
