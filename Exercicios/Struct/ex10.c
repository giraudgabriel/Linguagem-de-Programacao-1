#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	Pessoa {
    char nome[100],
    endereco[100],
    telefone[15] 
}Pessoa;

int compararLetra(const void *a, const void *b)
{
    int cmp = strcmp(((struct Pessoa*)a)->nome, ((struct Pessoa*)b)->nome);
    return (cmp == 0) ?  -1 : (cmp < 0) ? 0 : 1;
}

int main(int argc, char const *argv[])
{
    Pessoa pessoas[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Pessoa %d \n \n",i+1);
        
        printf("Digite seu nome:\n");
        fflush(stdin);
        gets(pessoas[i].nome);

        printf("Digite seu endereco:\n");
        fflush(stdin);
        gets(pessoas[i].endereco);
        
        printf("Digite seu telefone:\n");
        fflush(stdin);
        gets(pessoas[i].telefone);
    }

    qsort(pessoas,5,sizeof(Pessoa),compararLetra);

    for (int j = 0; j < 5; j++)
        printf("Nome: %s \t Endereco: %s \t Telefone:%s \n",pessoas[j].nome,pessoas[j].endereco,pessoas[j].telefone);

    return 0;
}
