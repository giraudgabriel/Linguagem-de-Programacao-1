#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    typedef struct Pessoa {
        char nome[100];
        int idade;
        char endereco[200];
    }	Pessoa;

    Pessoa pessoa[1];

    printf("Digite seu nome:\n");
    fflush(stdin);
    gets(pessoa[0].nome);

    printf("Digite sua idade:\n");
    scanf("%d",&pessoa[0].idade);

    printf("Digite seu endereco:\n");
    fflush(stdin);
    gets(pessoa[0].endereco);
    
    printf("Nome : %s \n, Idade: %d \n, Endereco %s",pessoa[0].nome, pessoa[0].idade, pessoa[0].endereco);

    return 0;
}
