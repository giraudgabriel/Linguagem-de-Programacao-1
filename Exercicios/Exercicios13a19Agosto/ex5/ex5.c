#include <stdio.h>
#include <stdlib.h>

/* 5º -  Elabore  um algoritmo e um programa em C que leia as medidas dos 
três lados de um triângulo e determine se o triângulo é equilátero, isósceles ou escaleno, imprimindo o resultado na tela.


Triângulo equilátero: possui os três lados com medidas iguais. 
Triângulo isósceles: possui dois lados com medidas iguais. 
Triângulo escaleno: possui os três lados com medidas diferentes. 

  */

int main(int argc, char *argv[]) {
	int a = 0, b = 0, c = 0;
	
	printf("Digite um lado do triangulo: \n");
	scanf("%d", &a);
	printf("Digite um lado do triangulo: \n");
	scanf("%d", &b);
	printf("Digite um lado do triangulo: \n");
	scanf("%d", &c);
	
	if(a == b && b == c && a == c)
	{
		printf("Equilatero");
	}
	else if((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
	{
		printf("Isosceles");
	}
	else if(a != b && a != c && b != c)
	{
		printf("Escaleno");
	}
	
	return 0;
}
