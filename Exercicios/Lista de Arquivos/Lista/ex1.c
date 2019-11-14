#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *arq;

    arq = fopen("arq.txt","w");

    char palavra[100];
    printf("Digite algo pra gravar no arquivo:\n");
    fflush(stdin);
    gets(palavra);

    while(strcmp(palavra,"0") != 0){
        fwrite(palavra,sizeof(char),strlen(palavra),arq);

        printf("Digite algo pra gravar no arquivo:\n");
        fflush(stdin);
        gets(palavra);
    }

    fclose(arq);

    arq = fopen("arq.txt","r");

    if(arq == NULL){
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }

    while(!feof(arq)){
        printf("%c",fgetc(arq));
    }
    fclose(arq);
    
    return 0;
}
