#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float distancia, custoTotal, precoLitro, consumo, gastoManutencao, pedagio;
	
	printf("Digite a distancia:\n");
	scanf("%f",&distancia);
	
	printf("Digite o preco do litro do combustivel:\n");
	scanf("%f",&precoLitro);
	
	printf("Digite o consumo da gasolina:\n");
	scanf("%f",&consumo);
	
	printf("Digite os gastos com manutencao:\n");
	scanf("%f",&gastoManutencao);
	
	printf("Digite o gasto com pedagio:\n");
	scanf("%f",&pedagio); 
	
	custoTotal = precoLitro * consumo;
	
	custoTotal += gastoManutencao + pedagio;
	
	float gastoKM = custoTotal / distancia;
	
	printf("O gasto por KM foi de %f \n",gastoKM);
	system("pause");
}
