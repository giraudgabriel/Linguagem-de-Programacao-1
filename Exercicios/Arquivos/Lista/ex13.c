#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

int main() {

    FILE * fw1;
    char arquivo1[200];
    char nome[200], telefone[200];

    printf("Digite o caminho do arquivo a ser salvo:\n");
    fflush(stdin);
    gets(arquivo1);

    fw1 = fopen(arquivo1, "w");
    if (fw1 == NULL) {
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }
    printf("Digite o nome:\n");
    fflush(stdin);
    gets(nome);

    printf("Digite o telefone:\n");
    fflush(stdin);
    gets(telefone);

    while (telefone[0] != '0' && strlen(telefone) > 1) {
        for (int i = 0; i < strlen(nome); i++)
            fputc(nome[i], fw1);
        fputc('\t', fw1);

        for (int i = 0; i < strlen(telefone); i++)
            fputc(telefone[i], fw1);
        
        fputc('\n', fw1);

        printf("Digite o nome:\n");
        fflush(stdin);
        gets(nome);
        
        printf("Digite o telefone:\n");
        fflush(stdin);
        gets(telefone);
    }

    fclose(fw1);
    return 0;
    system("pause");
}