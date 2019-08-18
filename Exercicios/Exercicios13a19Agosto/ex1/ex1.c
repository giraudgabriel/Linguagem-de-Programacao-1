#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lado[2], perimetro, area = 0;
	printf("Digite o valor da base:\n");
	scanf("%d",&lado[0]);
	printf("Digite o valor da altura:\n");
	scanf("%d",&lado[1]);	
	perimetro = (2*(lado[0]) + 2*(lado[1]));
	area = lado[0] * lado[1];
	printf("A area e %d e o perimetro e %d",area,perimetro);
	
	return 0;
}
