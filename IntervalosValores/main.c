#include <stdio.h>
#include <stdlib.h>

/* 
		Crie uma aplicação que deverá solicitar 5 valores inteiros quaisquer, a aplicação deverá bloquear a execução
		caso exista algum valor repetido entre os 4 primeiros valores, a aplicação deverá utilizar os 2 primeiros
		valores e criar um intervalo de valores entre o menor e maior valor, a aplicação deverá realizar o
		mesmo procedimento com o 3º e 4º valor fornecido, neste momento a aplicação deverá conter dois
		intervalos de valores, por fim, a aplicação deverá verificar se o 5º está dentro do primeiro intervalo, se
		está dentro do segundo intervalo, verificar se está dentro do ambos intervalos ou se não está dentro
		de nenhum intervalo.
		
		NOTAS:
		N1 - Caso o 1º e 2º valor não estejam devidamente ordenados do menor para o maior, a aplicação
		deverá ordená-los criando um intervalo.
		N2 - O 5º valor poderá estar em várias situações diferentes, a aplicação deverá exibir mensagens
		informando se o mesmo não se encontra dentro de nenhum dos intervalos, se está em ambos os
		intervalos, se está somente no primeiro intervalo ou se está dentro apenas do segundo intervalo. 

 */

int main(int argc, char *argv[]) {
	
	int v1, v2, v3, v4, v5 = 0;
	
	
	printf("..:: Intervalo entre valores ::.. \n \n");
	printf("Digite 2 intervalos de valores, um numero e veja em quais intervalos ele se encaixa! \n \n");
	printf("Informe o PRIMEIRO numero do PRIMEIRO intervalo: ");
	scanf("%i", &v1);
	printf("Informe o SEGUNDO numero do PRIMEIRO intervalo: ");
	scanf("%i", &v2);
	printf("Informe o PRIMEIRO numero do SEGUNDO intervalo: ");
	scanf("%i", &v3);
	printf("Informe o SEGUNDO numero do SEGUNDO intervalo: ");
	scanf("%i", &v4);
	printf("Informe o numero para ser processado: ");
	scanf("%i", &v5);
	
	if (v1 == v2 || v1 == v3 || v1 == v4 || v2 == v3 || v2 == v4 || v3 == v4) {
		printf("EXECUCAO BLOQUEADA, valores repeditos");
	}
	
	if (v1 > v2) {
		int aux = v1;
		v1 = v2;
		v2 = aux;
	}
	
	if (v3 > v4) {
		int aux = v3;
		v3 = v4;
		v4 = aux;
	}
	

	if (v5 >= v1 && v5 <= v2 && v5 >= v3 && v5 <= v4) {
		printf("\n \n");
		printf("O numero esta dentro dos 2 intervalos! \n \n");
		printf("Primeiro intervalo: Entre %i e %i \n", v1, v2);
		printf("Segundo intervalo: Entre %i e %i \n", v3, v4);
	} else {
				
		if (v5 >= v1 && v5 <= v2) {
			printf("\n \n");
			printf("O numero esta dentro do PRIMEIRO intervalo! \n \n");
			printf("Primeiro intervalo: Entre %i e %i \n", v1, v2);
			printf("Segundo intervalo: Entre %i e %i \n", v3, v4);
			
		} else {
			
			if (v5 >= v3 && v5 <= v4) {
				printf("\n \n");
				printf("O numero esta dentro do SEGUNDO intervalo! \n \n");
				printf("Primeiro intervalo: Entre %i e %i \n", v1, v2);
				printf("Segundo intervalo: Entre %i e %i \n", v3, v4);
			} else {
				printf("\n \n");
				printf("O numero NAO pertence a nenhum intervalo! \n \n");
				printf("Primeiro intervalo: Entre %i e %i \n", v1, v2);
				printf("Segundo intervalo: Entre %i e %i \n", v3, v4);
			}
		}
	}

	return 0;
}
