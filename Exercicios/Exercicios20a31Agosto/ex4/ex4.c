#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char nome;
	int idade;
	float peso = 0.0, altura = 0.0, imc = 0.0;
	float valor = 0.0;
	int id = 0;
int main(int argc, char *argv[]) {
	
	
	printf("Digite seu nome: \n");
	scanf("%s",&nome);
	
	printf("Digite sua idade: \n");
	scanf("%d",&idade);
	
	printf("Digite seu peso: \n");
	scanf("%f",&peso);
	
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	
	int opcao = 1;
	
	while(opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4)
	{
	
	printf("Menu de Opcoes: \n");
	printf("1 - IMC \n");
	printf("2 - Engordar \n");
	printf("3 - Emagrecer \n");
	printf("4 - Envelhecer \n");
	scanf("%d", &opcao);
		switch(opcao)
		{
			case 1:
				calcularImc(peso,altura);
				break;
			case 2:
				printf("Digite o valor para engordar: \n");
				scanf("%f",&valor);
				engordar(valor,peso);
				break;
			case 3:
				printf("Digite o valor para emagrecer: \n");
				scanf("%f",&valor);
				emagrecer(valor,peso);
				break;
			case 4:
				printf("Digite a quantia para envelhecer:\n");
				scanf("%d",&id);
				envelhecer(id,idade,peso);
				break;
		}
	}

	
	return 0;
}


void calcularImc(float peso, float altura)
{
	imc = peso/ (altura * altura);
	printf("Seu imc e %f: ", imc);
}

void envelhecer(int anos, int idade, float peso)
{
	idade += anos;
	crescer(idade, anos);
}

void engordar(float kilos, float peso)
{
	peso += kilos;
}

void emagrecer(float kilos, float peso)
{
	peso -= kilos;
}

void crescer(int idade, int aumento, float altura)
{
	float acrescimo = 0.0;
	if(idade < 21)
	{
		acrescimo = aumento * 0.5;
	}
	altura += acrescimo;
	
	printf("Sua nova altura e %f: ",&altura);
}
