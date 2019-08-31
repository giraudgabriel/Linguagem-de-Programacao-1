#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char S1[20], S2[20];	
int main(int argc, char *argv[]) {
	int opcao = 1;
	
	while(opcao != 0)
	{
	printf("Escolha uma opcao: \n");
	printf("1 \n");
	printf("2 \n");
	printf("3 \n");
	printf("4 \n");
	printf("5 \n");
	printf("6 \n");
	printf("7 \n");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			a();
			break;
		case 2:
			b();
			break;
		case 3:
			c();
			break;
		case 4:
			d();
			break;
		case 5:
			e();
			break;
		case 6:
			break;
		case 7:
			break;
	}
}
	return 0;
}


void a()
{
	printf("Digite uma palavra:\n");
	scanf("%s",&S1);
}

void b()
{	
	printf("O tamanho e %d \n", strlen(S1));
}

void c()
{
	printf("Digite a segunda palavra \n");
	scanf("%s",&S2);
	if(strcmp(S1,S2) == 0)
	{
		printf("As palavras sao iguais \n");
	}
	else
	{
		printf("As palavras sao diferentes \n");
	}
}

void d()
{
	printf("Digite a segunda palavra para concatenar a primeira \n");
	scanf("%s",&S2);
	printf("A concatenacao e : %s \n",strcat(S1,S2));
}

void e()
{
	printf("Reversa: %s", strrev(S1));
}
