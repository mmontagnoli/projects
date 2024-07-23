#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis 
	float preco_aula, aulas_semanais, salario_mensal, vale_alimentacao, vale_transporte, salario_bruto, INSS, IR, salario_liquido = 0.0;
	
	//entrada
	printf("..:: Informacoes Salariais ::.. \n \n");
	printf("Digite o preco por aula que voce ganha: ");
	scanf("%f", &preco_aula);
	printf("Digite a quantidade de aulas que voce realiza semanalmente: ");
	scanf("%f", &aulas_semanais);
	
	//processamento
	salario_mensal = (preco_aula * aulas_semanais) * 4;
	vale_alimentacao = salario_mensal * 0.10;
	vale_transporte = salario_mensal * 0.06;
	salario_bruto = salario_mensal + vale_alimentacao + vale_transporte;
	INSS = salario_mensal * 0.03;
	IR = salario_mensal * 0.04;
	salario_liquido = salario_bruto - INSS - IR;
	
	//saida
	printf("\n");
	printf("De acordo com os dados fornecidos, suas informacoes salariais sao: \n");
	printf("Salario mensal: %f reais \n", salario_mensal );
	printf("Vale alimentacao: %f reais \n", vale_alimentacao );
	printf("Auxilio transporte: %f reais \n", vale_transporte );
	printf("Salario bruto: %f reais \n", salario_bruto );
	printf("Valor descontado do INSS: %f reais \n", INSS );
	printf("Valor desconado do IR: %f reais \n", IR );
	printf("Salario liquido: %f reais \n", salario_liquido );
	return 0;
}
