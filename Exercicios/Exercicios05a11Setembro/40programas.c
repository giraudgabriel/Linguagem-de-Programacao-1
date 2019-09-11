#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
			case 5:
				programa = Ex5();
				break;
			case 6:
				programa = Ex6();
				break;
			case 7:
				programa = Ex7();
				break;
			case 8:
				programa = Ex8();
				break;
			case 9:
				programa = Ex9();
				break;
			case 10:
				programa = Ex10();
				break;
			case 11:
				programa = Ex11();
				break;
			case 12:
				programa = Ex12();
				break;
			case 13:
				programa = Ex13();
				break;
			case 14:
				programa = Ex10();
				break;
			case 15:
				programa = Ex10();
				break;
			case 16:
				programa = Ex10();
				break;
			case 17:
				programa = Ex10();
				break;
			case 18:
				programa = Ex10();
				break;
			case 19:
				programa = Ex10();
				break;
			case 20:
				programa = Ex10();
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

int GetInt()
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%d",&numero);
	return numero;
}
float GetFloat(char* texto)
{
	float numero;
	printf(texto);
	scanf("%f",&numero);
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
	int numero1 = GetInt();
	int numero2 = GetInt();
	
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
	int numero = GetInt();
	if(IsPositivo(numero))
	{
		float raiz = sqrt(numero);
		printf("A raiz quadrada de %d e %f \n",numero,raiz);
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
	int numero = GetInt();
	if(numero % 2 == 0)
		printf("Par \n");
	else
		printf("Impar \n");
	return Continuar();
}

int Ex6()
{
	int n1 = GetInt();
	int n2 = GetInt();
	int maior = MaiorNumero(n1,n2);
	int diferenca = n1 - n2;
	printf("O maior e %d \n e a diferenca e %d \n",maior,diferenca);
	return Continuar();
}
int Ex7()
{
	int n1 = GetInt();int n2 = GetInt();
	if(n1 == n2)
		printf("Numeros iguais! \n");
	else
		printf("O maior numero %d",MaiorNumero(n1,n2));
	return Continuar();
}
int Ex8()
{
	float n1 = GetFloat("Digite uma nota \n");
	float n2 = GetFloat("Digite outra nota \n");
	float media;
	
	if(n1 >= 0 && n1 <=10 && n2 >= 0 && n2 <=10)
	{
		printf("A media e %f: \n",(n1 + n2) / 2);
	}
	else
	{
		printf("Nota invalida! \n");
	}
		
	return Continuar();
}
int Ex9()
{
	float salario = GetFloat("Digite seu salario: \n");
	float prestacao = GetFloat("Digite o valor da prestacao do emprestimo: \n R$ ");
	if(prestacao > (salario * 0.2) )
	{
		printf("Emprestimo nao concedido ! \n");
	}
	else
	{
		printf("Emprestimo concedido!");
	}
	return Continuar();
}
int Ex10()
{
	float altura = GetFloat("Digite sua altura: \n"); 
	char sexo;
	printf("Digite seu sexo [M - F]: \n");
	scanf("%s",&sexo);
	if(sexo == 'M')
	{
		printf("Seu peso ideal e : %f \n", (72.7 * altura) - 58);
	}
	else
	{
		printf("Seu peso ideal e : %f \n",  (62.1 * altura) - 44.7);
	}
	return Continuar();
}
int Ex11()
{
	
}
int Ex12()
{
	int numero = GetInt();
	if(IsPositivo(numero))
	{
		printf("O log de %d e %d \n",numero,log(numero));
	}
	else
	{
		printf("Numero invalido! \n");
	}
	return Continuar();
}
int Ex13()
{
	float p1 = GetFloat("Digite a nota : \n") *1;
	float p2 = GetFloat("Digite a nota : \n") *1;
	float p3 = GetFloat("Digite a nota : \n") *2;
	float media = p1+p2+p3/3;
	if(media >=60)
		printf("Aprovado ! \n");
	else
		printf("Reprovado! \n");
	return Continuar();
}

int Ex14()
{
	float p1 = GetFloat("Digite a nota : \n") *2;
	float p2 = GetFloat("Digite a nota : \n") *3;
	float p3 = GetFloat("Digite a nota : \n") *5;
	float media = p1+p2+p3/3;
	if(media <2.9)
		printf("Reprovado ! \n");
	else if(media >= 3  && media <=4.9)
		printf("Recuperacao! \n");
	else
		printf("Aprovado");
	return Continuar();
}
int Ex15()
{
	int dia = GetInt();
	switch(dia)
	{
		case 1:
			printf("Domingo");
		case 2:
			printf("Segunda-feira");
		case 3:
			printf("Terca-Feira");
		case 4:
			printf("Quarta Feira");
		case 5:
			printf("Quinta Feira");
		case 6:
			printf("Sexta Feira");
		case 7:
			printf("Sabado");
	}
	printf("\n");
	return Continuar();
}
int Ex16()
{
	int mes = GetInt();
	switch(mes)
	{
		case 1:
			printf("Janeiro");
		case 2:
			printf("Fevereiro");
		case 3:
			printf("Marco");
		case 4:
			printf("Abril");
		case 5:
			printf("Maio");
		case 6:
			printf("Junho");
		case 7:
			printf("Julho");
		case 8:
			printf("Agosto");
		case 9:
			printf("Setembro");
		case 10:
			printf("Outubro");
		case 11:
			printf("Novembro");
		case 12:
			printf("Dezembro");
	}
	printf("\n");
	return Continuar();
}
int Ex17()
{
	float baseMaior = GetFloat("Digite a base maior:\n");
	float baseMenor = GetFloat("Digite a base menor:\n");
	float altura = GetFloat("Digite a altura:\n");
	float area = ((baseMaior+ baseMenor) * altura)/2;
	printf("A area do trapezio e %f \n",area);
	return Continuar();	
}
float operacao (float n1, float n2, char tipo)
{
	if(tipo == '+') return n1+n2;
	if(tipo == '-') return n1 - n2;
	if(tipo == '/') return n1/n2;
	if(tipo == '*') return n1*n2;
}
int Ex18()
{
	float numero1 = GetFloat("Digite um numero:\n");
	float numero2 = GetFloat("Digite um numero:\n");
	char tipo;
	printf("Selecione uma operacao:\n");
	printf("+\n");
	printf("-\n");
	printf("/\n");
	printf("*\n");
	scanf("%c",&operacao);
	float resultado = operacao(numero1,numero2,tipo);
	printf("Resultado de %f %c %f = %f \n",numero1,tipo,numero2,resultado);
	return Continuar();
}
int Ex19()
{
	int numero = GetInt();
	if(numero % 3 == 0)
	{
		printf("E divisivel por 3 \n");
	}
	if(numero % 5 == 0)
	{
		printf("E divisivel por 5 \n");
	}
	return Continuar();
}
int Ex20()
{
	int lado1 = GetInt();
	int lado2 = GetInt();
	int lado3 = GetInt();
	
	if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 +lado2)
	{
		if(lado1 == lado2 && lado2 == lado3 && lado1 ==lado3)
		{
			printf("Equilatero \n");
		}
		else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
		{
			printf("Isosceles \n");
		}
		else
		{
			printf("Escaleno \n");
		}
	}
	return Continuar();
}

int Ex21()
{
	char opcao;
	printf("Escolha a opcao:\+. \n -.\n3- *.\ / (o denominador nao pode ser zero)\n");
	scanf("%s",opcao);
	float numero1 = GetFloat("Digite um numero:\n");
	float numero2 = GetFloat("Digite um numero:\n");
	float resultado = operacao(numero1,numero2,opcao);
	printf("Resultado : %f \n",resultado);
	return Continuar();
}

int Ex22()
{
	float idade = GetFloat("Digite sua idade :\n");
	float tempo = GetFloat("Digite seu tempo de servico total:\n");
	if(idade >=65 || tempo >=30 || idade == 60 && tempo >=25)
	{
		printf("Pode aposentar!\n");
	}
	else
		printf("Nao pode aposentar!\n");
	return Continuar();
}

int Ex23()
{
	int ano = GetInt();
	if(ano % 400 == 0 || (ano % 4 ==0 && ano %100 > 0) )
	{
		printf("Bissexto \n");
	}
	else
		printf("Nao e bissexto \n");
	return Continuar();
}
int Ex24()
{
	char* estado;
	float valor = GetFloat("Digite o valor:\n");
	printf("Digite um estado:\n");
	scanf("%s",&estado);
	if(strcmp(estado,"MG") == 0)
	{
		valor += valor*0.07;
	}
	
	else if(strcmp(estado,"SP") == 0)
	{
		valor += valor*0.12;
	}
	
	else if(strcmp(estado,"RJ") == 0)
	{
		valor += valor*0.15;
	}
	
	else if(strcmp(estado,"MS") == 0)
	{
		valor += valor *0.08;
	}
	else
	{
		printf("Estado invalido! \n");
		return Continuar();
	}
	printf("O valor e %f : \n",valor);
	return Continuar();
}
