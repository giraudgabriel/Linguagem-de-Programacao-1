#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

int main(int argc, char
    const * argv[]) {
    FILE * arq;

    char arquivo[200];

    printf("Digite o caminho do arquivo:\n");
    fflush(stdin);
    gets(arquivo);

    arq = fopen(arquivo, "r");

    if (arq == NULL) {
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }
    int vogais = 0;
    int consoantes = 0;
    while (!feof(arq)) {
        char letra = fgetc(arq);
        if (isalpha(letra)){
            letra = tolower(letra);
            switch (letra) {
                case 'a':
                    vogais++;
                    break;
                case 'e':
                    vogais++;
                    break;
                case 'i':
                    vogais++;
                    break;
                case 'o':
                    vogais++;
                    break;
                case 'u':
                    vogais++;
                    break;
                default:
                    consoantes++;
                    break;
            }
        }
    }
    printf("\n Numero de vogais : %d", vogais);
    printf("\n Numero de consoantes : %d", consoantes);

    fclose(arq);

    return 0;
}