#include <stdio.h>
#include <stdlib.h>

/* 5� -  Elabore  um algoritmo e um programa em C que leia as medidas dos 
tr�s lados de um tri�ngulo e determine se o tri�ngulo � equil�tero, is�sceles ou escaleno, imprimindo o resultado na tela.


Tri�ngulo equil�tero: possui os tr�s lados com medidas iguais. 
Tri�ngulo is�sceles: possui dois lados com medidas iguais. 
Tri�ngulo escaleno: possui os tr�s lados com medidas diferentes. 

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
