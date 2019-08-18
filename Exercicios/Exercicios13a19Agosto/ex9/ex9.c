#include <stdio.h>
#include <stdlib.h>

/* Elabore um algoritmo e um programa em C que leia os coeficientes
 a, b e c de uma função de 2º grau e calcule x para y=0, imprimindo o resultado na tela.  */

int main(int argc, char *argv[]) {
	int a = 0 , b = 0, c = 0;
	float x1,x2;
	int delta = 0;
	
	printf("Digite os valores de a, b e c: \n");
	scanf("%d%d%d",&a,&b,&c);
	
	delta = (b*b) - (4 * a * c);
	
	x1 =((b *-1) + sqrt(delta)) / (2*a);
	x2 =((b *-1) - sqrt(delta)) / (2*a);
	
	printf("x1 = %f  x2 = %f",x1,x2);
	
	return 0;
}
