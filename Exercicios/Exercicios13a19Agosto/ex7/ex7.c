#include <stdio.h>
#include <stdlib.h>

/*  7º - Elabore  um algoritmo e um programa em C que leia peso e altura de uma pessoa e calcule o IMC, imprimindo o resultado na tela.  */

int main(int argc, char *argv[]) {
	float peso, altura , imc;
	
	printf("Digite seu peso: \n");
	scanf("%f",&peso);
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	imc = peso / (altura * altura);
	
	printf("Seu imc e : %f", imc);
	
	return 0;
}
