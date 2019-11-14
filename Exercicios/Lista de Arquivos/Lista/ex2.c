#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *arq;

    char arquivo[200];

    printf("Digite o caminho do arquivo:\n");
    fflush(stdin);
    gets(arquivo);

    arq = fopen(arquivo,"r");

    if(arq == NULL){
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }
    int linhas = 1;
    while(!feof(arq)){
        if(fgetc(arq) == '\n'){
            linhas++;
        }
    }
    printf("\n Numero de linhas : %d",linhas);

    fclose(arq);
    
    return 0;
}
