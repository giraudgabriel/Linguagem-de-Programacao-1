#include <stdio.h>
#include <stdlib.h>

/*
4º -  Elabore um algoritmo e um programa em C que resolva o  Problema C, " A Horta do Juquinha", 
de: Antonio Cesar de Barros Munari (Fatec Sorocaba), da Maratona de Programação InterFatec's 2018.
*/

int main(int argc, char *argv[]) {
	int T[3], Q[3], i = 2; 
	int covas = 0;
	
	while(i > -1)
	{
		scanf("%d%d",&T[i],&Q[i]);
		if(T[i] >= 1 && T[i] <= 100)
		{
			if(Q[i] >= 1 && Q[i] <= T[i])
			{
				covas += T[i] / Q[i];
				i--;
			} 
			else 
			{
				i = -1;
			}
		}
		else
		{
			i = -1;
		}
	}
	
	printf("%d",covas);
	
	return 0;
}
