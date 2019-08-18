#include <stdio.h>
#include <stdlib.h>

/* Elabore um algoritmo e um programa em C que leia as medidas dos três lados de um 
triângulo e calcule o perímetro e área, imprimindo o resultado na tela.  */


/*
 decidi utilizar a fórmula de heron
*/
int main(int argc, char *argv[]) {
	int lado[3], i = 0, perimetro = 0, a, b, c; 
	float area, heron = 0.0;
	
	for(i = 0; i < 3 ; i++)
	{
		printf("Digite o valor do %d - lado:\n",i+1);
		scanf("%d",&lado[i]);
		perimetro += lado[i];
		heron += lado[i];
	}
	heron /= 2;
	a = lado[0], b = lado[1], c = lado[2];
		
	area = sqrt((heron * (heron - a) * (heron - b) * (heron - c)));
	
	printf("O perimetro e %d e a area e %f", perimetro, area);
	
	return 0;
}
