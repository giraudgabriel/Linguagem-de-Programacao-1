#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char
    const * argv[]) {

    FILE *fr1, *fr2, *fw;
    char arquivo1[200],arquivo2[200], arquivo3[200];

    printf("Digite o caminho do arquivo a ser lido:\n");
    fflush(stdin);
    gets(arquivo1);

    printf("Digite o caminho do segundo arquivo a ser lido:\n");
    fflush(stdin);
    gets(arquivo2);

    printf("Digite o caminho do arquivo a ser salvo:\n");
    fflush(stdin);
    gets(arquivo3);

    fr1 = fopen(arquivo1, "r");
    fr2 = fopen(arquivo2, "r");
    fw = fopen(arquivo3, "w");

    if (fr1 == NULL && fr2 == NULL && fw == NULL) {
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }
    char letra = fgetc(fr1);
    while (!feof(fr1)) {
        fputc(letra,fw);
        letra = fgetc(fr1);
    }
    letra = fgetc(fr2);
    while (!feof(fr2)) {
        fputc(letra,fw);
        letra = fgetc(fr2);
    }

    fclose(fr1);
    fclose(fr2);
    fclose(fw);

    return 0;
}
