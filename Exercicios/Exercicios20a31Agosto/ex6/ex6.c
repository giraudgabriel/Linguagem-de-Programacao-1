#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char programa = 0;
	printf("\n Escolha um programa:");
	printf("\n [A]");
	printf("\n [B]");
	printf("\n [C]");
	printf("\n [D] \n");
	
	scanf("%c",&programa);
	
	
	switch(toupper(programa)){
	
		case 'A':
			A();
			break;
		case 'B':
			B();
			break;
		case 'C':
			C();
			break;
		case 'D':
			D();
			break;
	}
	return 0;
}

void A()
{
	char sabe;
	printf("Sabe para onde ir? responda S para (sim) e N para (nao) \n");
	sabe = getche();
		if(sabe == 'n' || sabe == 'N')
		{
			char destino[40];
			printf("\n Escolha o destino :");
			scanf("%s",&destino);
		}
		char ondeficar[40];
		printf("\n Defina onde ficar:");
		scanf("%s",&ondeficar);
		
		char oqueFazer[40];
		printf("\n Defina o que fazer:");
		scanf("%s",&oqueFazer);
		
		char pacote[40];
		printf("\n Escolha um dos pacotes de viagem:");
		scanf("%s",&pacote);
		
	}


void B()
{
	int N = 0;
	printf("Insira um numero natural N diferente de 0: \n");
	scanf("%d",&N);
	
	if(N > 0)
	{
	
		if(N % 2 == 0)
		{
			printf("Par");
		}
		else
		{
			printf("Impar");
		}
	}
	
	
}

void C()
{
	int n = 0, caderno = 0;
	
	while(n <= 10)
	{
		caderno = n * 6;
		n+=1;
	}
	
}

void D()
{
	int N = 0;
	printf("\n Insira um numero natural N:");
	scanf("%d", &N);
	
	if(N % 3 == 0)
	{
		printf(" N e multiplo de 3");
	}
	else
	{
		printf("N nao e multiplo de 3");
	}
}
