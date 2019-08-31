#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeros[5];
	
	scanf("%d%d%d%d%d",&numeros[0],&numeros[1],&numeros[2],&numeros[3],&numeros[4]);
	
	MaiorNumero(numeros);
	MenorNumero(numeros);
	Mediana(numeros);
	Media(numeros);
	return 0;
}

int MaiorNumero(int numeros[])
{
	int maior = 0, i = 0;
	for(i = 0; i < 5 ; i++)
	{
		if(numeros[i] > maior)
		{
			maior = numeros[i];
		}
	}
	printf("\n Maior: %d", maior);
}

int MenorNumero(int numeros[])
{
	int menor = 2147483647, i = 0, lenght = 5;
	
	for(i = 0; i < lenght  ; i++)
	{
		if(numeros[i] < menor)
		{
			menor = numeros[i];
		}
	}
	printf("\n Menor: %d", menor);
}

int Mediana(int numeros[])
{
	int i = 5/2;
	printf("\n Mediana %d", numeros[i]);
	
}

int Media (int numeros[])
{
	int soma = 0, i = 0;

	for(i = 0; i < 5  ; i++)
	{
		soma += numeros[i];
	}
	
	float media = soma / 5;
	
	printf("A media e : %f", media);
}

