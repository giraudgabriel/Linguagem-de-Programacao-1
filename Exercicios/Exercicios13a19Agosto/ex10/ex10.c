#include <stdio.h>
#include <stdlib.h>

/*labore um algoritmo e um programa em C que resolva o 
 Problema H "Poupan�a Multi-data"de J�lio Lieira (Fatec Lins), da Maratona de Programa��o InterFatec's 2018. */
/*

� Anivers�rio da poupan�a, ou data base, � o dia em que foi realizado um dep�sito e � neste dia que ser�
creditado o rendimento a cada 30 dias. Por exemplo, se voc� fez um dep�sito no dia 15 deste m�s, no
dia 15 de cada m�s subsequente ser� aplicado o rendimento. Se retirar antes do anivers�rio, perde-se
o rendimento sobre o valor sacado;

� Quando o dep�sito � feito nos dias 29, 30 ou 31, o anivers�rio, ou data base, ser� o dia 1 do m�s
seguinte, pois nem todos os meses possuem esses dias.
Ent�o, qual estrat�gia usar para escolher o(s) dia(s) para debitar o valor da retirada? Bom, antes de mandar
um clarification, analise os exemplos.

Entrada
A primeira linha da entrada possui um valor inteiro A (1 6 A 6 31), representando o dia da retirada, seguido
de um valor real R (0.01 6 R 6 1000000.00) representando o valor da retirada feita neste dia. Cada uma
das pr�ximas linhas da entrada � composta por um n�mero inteiro D (1 6 D 6 31), representando um dia
do m�s em que Tio Ariovaldo possui saldo na poupan�a (data base), seguido de um valor real de duas casas
decimais S (0.01 6 S 6 100000.00), que representa o saldo no referido dia. Os dias ser�o apresentados em
ordem crescente e existe um espa�o separando os valores.

Sa�da
Na sa�da devem ser apresentados, em ordem crescente do dia, os dias que foram afetados pela retirada com
as seguintes informa��es: a data base, saldo remanescente neste dia ap�s a retirada e, entre par�nteses, as
palavras �resgate de� seguido do valor retirado deste dia. Um espa�o separa cada informa��o. Devem ser
mostrados somente os dias afetados pela retirada. Escreva na sa�da a palavra INSUFICIENTE, caso n�o
haja saldo suficiente para a retirada. Cada linha finaliza com uma quebra de linha, inclusive a �ltima.
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
