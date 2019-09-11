#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 1, programa = 1;
	while(programa> 0 && programa <41)
	{
		printf("Escolha um programa:\n");
		for(i=1; i < 41; i++)
		{
			printf("[%d] \n",i);
		}
		scanf("%d",&programa);
		
		switch(programa)
		{
			case 1:
				programa = Ex1();
				break;
			case 2:
				programa = CalcularRaiz();
				break;
			case 3:
				programa = Ex3();
				break;
			case 4:
				programa = Ex4();
				break;
		}
					
		i=1;
	}
	
	return 0;
}

typedef enum
{
     false = 0,
     true = 1
} bool ;

int Continuar()
{
	int continuar = 0;
	printf("Deseja continuar? [0 OU 1] \n");
	scanf("%d",&continuar);
	return continuar;
}

int DigitarNumero()
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%d",&numero);
	return numero;
}

int MaiorNumero(int numero1,int numero2)
{
	int maior = 0;
	if(numero1 > numero2)
	{
		maior = numero1;
	}
	else
	{
		maior = numero2;
	}
	return maior;
}

int Ex1()
{
	int numero1 = DigitarNumero();
	int numero2 = DigitarNumero();
	
	printf("O maior e %d ! \n",MaiorNumero(numero1,numero2));
	
	return Continuar();
}

bool IsPositivo(int numero)
{
	bool positivo = numero > 0 ? true : false; 
	return positivo;
}

int CalcularRaiz()
{
	int numero = DigitarNumero();
	if(IsPositivo(numero))
	{
		printf("A raiz quadrada de %d e %f \n",numero,sqrt(numero));
	}
	else
	{
		printf("O numero digitado e negativo portanto invalido!\n");
	}
	return Continuar();
}

int Ex3()
{
	float numero;
	printf("Digite um numero real:\n");
	scanf("%f",&numero);
	if(IsPositivo(numero))
	{
		printf("Raiz:%f \n",sqrt(numero));
	}
	else
	{
		printf("%f ao quadrado : %f \n",numero,numero*numero);
	}
	return Continuar();
}

int Ex4()
{
	float numero;
	printf("Digite um numero:\n");
	scanf("%f",&numero);
	if(IsPositivo(numero))
	{
		printf("Raiz:%f \n",sqrt(numero));
		printf("%f ao quadrado : %f \n",numero,numero*numero);
	}
	return Continuar();
}
int Ex5()
{
	int numero = DigitarNumero();
	if(numero % 2 == 0)
		printf("Par \n");
	else
		printf("Impar \n");
	return Continuar();
}

int Ex6()
{
	int n1 = DigitarNumero();
	int n2 = DigitarNumero();
	int maior = MaiorNumero(n1,n2);
	int diferenca = n1 - n2;
	printf("O maior e %d \n e a diferenca e %d \n",maior,diferenca);
	return Continuar();
}
int Ex7()
{
	int n1 = DigitarNumero();int n2 = DigitarNumero();
	if(n1 == n2)
		printf("Numeros iguais! \n");
	else
		printf("O maior numero %d",MaiorNumero(n1,n2));
	return Continuar();
}
int Ex8()
{
	float n1,n2,media;
	printf("Digite uma nota:\n");
	scanf("%f",n1);
	
	printf("Digite uma nota:\n");
	scanf("%f",n2);
	
	if(n1 >= 0 && n1 <=10 && n2 >= 0 && n2 <=10)
	{
		printf("A media e %f: \n",(n1 + n2) / 2);
	}
	else
		printf("Nota invalida! \n");
	return Continuar();
}
int Ex9()
{
	
}


