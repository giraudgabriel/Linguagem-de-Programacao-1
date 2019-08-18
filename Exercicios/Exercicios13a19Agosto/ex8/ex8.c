#include <stdio.h>
#include <stdlib.h>

/*  Elabore um algoritmo e um programa em C que 
leia os coeficientes a e b de uma função de 1º grau e calcule x para y=0 ( y=ax+b), imprimindo o resultado na tela. */

int main(int argc, char *argv[]) {
	int a = 0 , b = 0;
	float x = 0;
	
	printf("Digite o valor de a: \n");
	scanf("%d",&a);
	printf("Digite o valor de b: \n");
	scanf("%d",&b);
	x = (b * -1) / a;
	printf("x = %f",x);
	
	return 0;
}
