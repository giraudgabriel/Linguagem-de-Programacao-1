#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char
    const * argv[]) {

    FILE * arq;
    int contador[27] = {0};
    char arquivo[200];
    //97 = a (minusculo) - 128 z(minusculo)
    printf("Digite o caminho do arquivo:\n");
    fflush(stdin);
    gets(arquivo);

    arq = fopen(arquivo, "r");

    if (arq == NULL) {
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }
    char letra;
    while (!feof(arq)) {
        letra = fgetc(arq);
        if (isalpha(letra)) {
            letra = tolower(letra);
            contador[(int)letra-97]++;
        }
    }
    for (int i = 0; i < 27; i++)
        printf("%c : %d \n",(char)i+97, contador[i]);
    
    fclose(arq);

    return 0;
}