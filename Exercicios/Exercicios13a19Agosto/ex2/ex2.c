#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char pessoa = 'A';
	int qtd, V, A = 0;
	
	scanf("%c%d",&pessoa,&qtd);
	if(qtd >= 1 && qtd <= 1000){
		while(qtd > 0){
			int nota = 0;
			scanf("%d",&nota);
	
			if(pessoa == 'V'){	
				V += nota;
				pessoa = 'A';
			}
			else if(pessoa == 'A'){
			A += nota;
			pessoa = 'V';
			}
			qtd--;
		}
	}

	printf("VOCE : %d AMIGO: %d",V,A);
	
	
	return 0;
}
