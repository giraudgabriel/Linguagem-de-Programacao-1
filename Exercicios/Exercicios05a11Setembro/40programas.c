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
				programa = Ex14();
				break;
			case 15:
				programa = Ex15();
				break;
			case 16:
				programa = Ex16();
				break;
			case 17:
				programa = Ex17();
				break;
			case 18:
				programa = Ex18();
				break;
			case 19:
				programa = Ex19();
				break;
			case 20:
				programa = Ex20();
				break;
			case 21:
				programa = Ex21();
				break;
			case 22:
				programa = Ex22();
				break;
			case 23:
				programa = Ex23();
				break;
			case 24:
				programa = Ex24();
				break;
			case 25:
				programa = Ex25();
				break;
			case 26:
				programa = Ex26();
				break;
			case 27:
				programa = Ex27();
				break;				
			case 28:
				programa = Ex28();
				break;
			case 29:
				programa = Ex29();
				break;
			case 30:
				programa = Ex30();
				break;
			case 31:
				programa = Ex31();
				break;
			case 32:
				programa = Ex32();
				break;
			case 33:
				programa = Ex33();
				break;
			case 34:
				programa = Ex34();
				break;
			case 35:
				programa = Ex35();
				break;
			case 36:
				programa = Ex36();
				break;
			case 37:
				programa = Ex37();
				break;
			case 38:
				programa = Ex38();
				break;
			case 39:
				programa = Ex39();
				break;
			case 40:
				programa = Ex40();
				break;
			case 41:
				programa = Ex41();
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
return Continuar();
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
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Terca-Feira");
			break;
		case 4:
			printf("Quarta Feira");
			break;
		case 5:
			printf("Quinta Feira");
			break;
		case 6:
			printf("Sexta Feira");
			break;
		case 7:
			printf("Sabado");
			break;
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
			break;
		case 2:
			printf("Fevereiro");
			break;
		case 3:
			printf("Marco");
			break;
		case 4:
			printf("Abril");
			break;
		case 5:
			printf("Maio");
			break;
		case 6:
			printf("Junho");
			break;
		case 7:
			printf("Julho");
			break;
		case 8:
			printf("Agosto");
			break;
		case 9:
			printf("Setembro");
			break;
		case 10:
			printf("Outubro");
			break;
		case 11:
			printf("Novembro");
			break;
		case 12:
			printf("Dezembro");
			break;
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
float Operacao (float n1, float n2, char tipo)
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
	printf("Selecione uma Operacao:\n");
	printf("+\n");
	printf("-\n");
	printf("/\n");
	printf("*\n");
	gets(tipo);
	float resultado = Operacao(numero1,numero2,tipo);
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
	float resultado = Operacao(numero1,numero2,opcao);
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
int Ex25()
{
	int a = (int)GetFloat("Digite o valor de a: \n");
	int b = (int)GetFloat("Digite o valor de b: \n");
	int c = (int)GetFloat("Digite o valor de c: \n");
	
	if(a == 0)
	{
		printf("Nao e uma equacao de segundo grau! \n");
		return Continuar();
	}
	int delta = b*b - 4 * a * c;
	if(delta == 0)
	{
		printf("Nao existe raiz \n");
	}
	else if(delta <=0)
	{
		printf("Raiz %f - Raiz Unica \n",sqrt(delta));
	}
	else if(delta >=0)
	{
		printf("as duas raizes \n");
	}
	return Continuar();
}
int Ex26()
{
	int distancia = (int)GetFloat("Insira a distancia:\n");
	int litros = (int)GetFloat("Insira a qtd de litros:\n");
	float consumo = distancia/litros;
	if(consumo<8)
		printf("Venda o carro!\n");
	else if(consumo> 8 && consumo <14)
		printf("Economico! \n");
	else if(consumo > 14)
		printf("Super economico!\n");
	return Continuar();
}
int Ex27()
{
	int idade = (int)GetFloat("Digite a idade do nadador:\n");
	if(idade >= 5 && idade <8)
	{
		printf("Infantil A\n");
	}
	else if(idade >=8 && idade <=10)
	{
		printf("Infantil B\n");
	}
	else if(idade >= 11 && idade <=13)
	{
		printf("Juvenil A \n");
	}
	else if(idade>=14 && idade<18)
	{
		printf("Juvenil B \n");
	}
	else if(idade >=18)
	{
		printf("Senior \n");
	}
	return Continuar();
}
int Ex28()
{
	return Continuar();
}
int Ex29()
{
	return Continuar();
}
int Ex30()
{
	return Continuar();
}
int Ex31()
{
	return Continuar();
}
int Ex32()
{
	return Continuar();
}
int Ex33()
{
	return Continuar();
}
int Ex34()
{
	return Continuar();
}
int Ex35()
{
	return Continuar();
}
int Ex36()
{
	return Continuar();
}
int Ex37()
{
	return Continuar();
}
int Ex38()
{
	return Continuar();
}
int Ex39()
{
	return Continuar();
}
int Ex40()
{
	float custo = GetFloat("Insira o custo de fabrica");
		
	return Continuar();
}
int Ex41()
{
	
	float peso = GetFloat("Digite seu peso:\n");
	float altura = GetFloat("Digite sua altura:\n");
	float imc = peso/(altura*altura);
	if(imc <= 18.5)
	{
		printf("Abaixo do Peso \n");
	}
	else if(imc>18.5 && imc <=24.9)
	{
		printf("Saudavel \n");
	}
	else if(imc>=25 && imc<=29.9)
	{
		printf("Peso em excesso \n");
	}
	else if(imc>=30 && imc<=34.9)
	{
		printf("Obesidade Grau I \n");
	}
	else if(imc>=35 && imc <=39.9)
	{
		printf("Obesidade Grau II(severa) \n");
	}
	else
	{
		printf("Obesidade Grau III(morbida)\n");
	}
	return Continuar();
}

