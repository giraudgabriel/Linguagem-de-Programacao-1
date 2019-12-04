#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

int main() {

    FILE * fr1;
    char arquivo1[200];
    int flag = 0, contadorPalavra = 0, contadorLinha = 0;
    int contadorLetras[27] = {0};

    printf("Digite o caminho do arquivo a ser lido:\n");
    fflush(stdin);
    gets(arquivo1);

    fr1 = fopen(arquivo1, "r");
    if (fr1 == NULL) {
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }
    char caracter = getc(fr1);
    while (!feof(fr1)) {
        switch (caracter) {
            case '\0':
            case '\n':
                contadorLinha++;
            case ' ':
                contadorPalavra++;
                break;
            default:
                break;
        }
        if (isalpha(caracter)) {
            caracter = tolower(caracter);
            contadorLetras[(int)caracter-97]++;
        }
        caracter = getc(fr1);
    }

    printf("\n Quantidade de palavras : %d !\n", contadorPalavra);
    printf("\n Quantidade de Linhas : %d !\n", contadorLinha);
    for (int i = 0; i < 27; i++)
        printf("%c : %d \n",(char)i+97, contadorLetras[i]);
    
    fclose(fr1);
    return 0;
}