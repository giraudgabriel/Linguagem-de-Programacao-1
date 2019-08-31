#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float distanciaTotal;
	int i = 0;
	while(i<5)
	{
		float distancia;
		printf("Digite a distancia da cidade %d :",i+1);
		scanf("%f", &distancia);
		
		distanciaTotal += distancia;
		i++;
	}
	
	printf("A distancia total e de %0.2f \n",distanciaTotal);
	system("pause");
}
