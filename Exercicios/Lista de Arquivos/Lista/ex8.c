#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char
    const * argv[]) {

    FILE *fr, *fw;
    char arquivo[200],arquivo2[200];
    
    printf("Digite o caminho do arquivo a ser lido:\n");
    fflush(stdin);
    gets(arquivo);

    printf("Digite o caminho do arquivo a ser salvo:\n");
    fflush(stdin);
    gets(arquivo2);

    fr = fopen(arquivo, "r");
    fw = fopen(arquivo2, "w");

    if (fr == NULL && fw == NULL) {
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }
    char letra = fgetc(fr);
    while (!feof(fr)) {
        if (isalpha(letra)) 
            fputc(toupper(letra),fw);
        letra = fgetc(fr);
    }
    
    fclose(fr);
    fclose(fw);

    return 0;
}