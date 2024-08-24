#include <stdio.h>
#include <stdlib.h>

/* 
		Crie uma aplica��o que dever� solicitar 5 valores inteiros quaisquer, a aplica��o dever� bloquear a execu��o
		caso exista algum valor repetido entre os 4 primeiros valores, a aplica��o dever� utilizar os 2 primeiros
		valores e criar um intervalo de valores entre o menor e maior valor, a aplica��o dever� realizar o
		mesmo procedimento com o 3� e 4� valor fornecido, neste momento a aplica��o dever� conter dois
		intervalos de valores, por fim, a aplica��o dever� verificar se o 5� est� dentro do primeiro intervalo, se
		est� dentro do segundo intervalo, verificar se est� dentro do ambos intervalos ou se n�o est� dentro
		de nenhum intervalo.
		
		NOTAS:
		N1 - Caso o 1� e 2� valor n�o estejam devidamente ordenados do menor para o maior, a aplica��o
		dever� orden�-los criando um intervalo.
		N2 - O 5� valor poder� estar em v�rias situa��es diferentes, a aplica��o dever� exibir mensagens
		informando se o mesmo n�o se encontra dentro de nenhum dos intervalos, se est� em ambos os
		intervalos, se est� somente no primeiro intervalo ou se est� dentro apenas do segundo intervalo. 

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
