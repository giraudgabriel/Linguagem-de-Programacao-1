#include <stdio.h>
#include <stdlib.h>

/*labore um algoritmo e um programa em C que resolva o 
 Problema H "Poupança Multi-data"de Júlio Lieira (Fatec Lins), da Maratona de Programação InterFatec's 2018. */
/*

• Aniversário da poupança, ou data base, é o dia em que foi realizado um depósito e é neste dia que será
creditado o rendimento a cada 30 dias. Por exemplo, se você fez um depósito no dia 15 deste mês, no
dia 15 de cada mês subsequente será aplicado o rendimento. Se retirar antes do aniversário, perde-se
o rendimento sobre o valor sacado;

• Quando o depósito é feito nos dias 29, 30 ou 31, o aniversário, ou data base, será o dia 1 do mês
seguinte, pois nem todos os meses possuem esses dias.
Então, qual estratégia usar para escolher o(s) dia(s) para debitar o valor da retirada? Bom, antes de mandar
um clarification, analise os exemplos.

Entrada
A primeira linha da entrada possui um valor inteiro A (1 6 A 6 31), representando o dia da retirada, seguido
de um valor real R (0.01 6 R 6 1000000.00) representando o valor da retirada feita neste dia. Cada uma
das próximas linhas da entrada é composta por um número inteiro D (1 6 D 6 31), representando um dia
do mês em que Tio Ariovaldo possui saldo na poupança (data base), seguido de um valor real de duas casas
decimais S (0.01 6 S 6 100000.00), que representa o saldo no referido dia. Os dias serão apresentados em
ordem crescente e existe um espaço separando os valores.

Saída
Na saída devem ser apresentados, em ordem crescente do dia, os dias que foram afetados pela retirada com
as seguintes informações: a data base, saldo remanescente neste dia após a retirada e, entre parênteses, as
palavras ‘resgate de’ seguido do valor retirado deste dia. Um espaço separa cada informação. Devem ser
mostrados somente os dias afetados pela retirada. Escreva na saída a palavra INSUFICIENTE, caso não
haja saldo suficiente para a retirada. Cada linha finaliza com uma quebra de linha, inclusive a última.
*/
int main(int argc, char *argv[]) {
	
	int dataRetirada = 0, dias[100], i = 0; j = 0;
	float valorRetirada = 0.01, valores[100] ;
	char resposta[100];
	
	scanf("%d %f",&dataRetirada,&valorRetirada);
	
	if(dataRetirada >= 1 && dataRetirada <=31 && valorRetirada >= 0.01 && valorRetirada <= 1000000.0)
	{
		scanf("%d %f",&dias[i],&valores[i]);
		while(dias[i] >=1 && dias[i] <=31 && valores[i]>=0.01 && valores[i]<=1000000.0) 
		{
			if(dataRetirada >= dias[i])
			{
//				resposta[j] += 
//				if(valores[i] - retirada >)
//				j++;			
			}
			i++;
			scanf("%d %f",&dias[i],&valores[i]);
					
		}
	}
	
	return 0;
}
