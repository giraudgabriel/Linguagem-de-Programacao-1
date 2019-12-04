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

    char c;

    printf("Digite um caracter para busca:\n");
    scanf("%c", & c);

    arq = fopen(arquivo, "r");

    if (arq == NULL) {
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }
    int contador = 0;
    while (!feof(arq)) {
        if (fgetc(arq) == c) {
            contador++;
        }
    }
    printf("\n Numero de repeticoes de %c : %d", c, contador);

    fclose(arq);

    return 0;
}