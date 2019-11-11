#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Livro {
    char titulo[30],autor[15];
    int ano;
}Livro;


int main(int argc, char const *argv[])
{
    Livro livros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n Livro %d \n",i+1);

        printf("Digite o titulo do livro:\n");
        fflush(stdin);
        gets(livros[i].titulo);

        printf("Digite o autor do livro:\n");
        fflush(stdin);
        gets(livros[i].autor);

        printf("Digite o ano do livro:\n");
        scanf("%d",&livros[i].ano);
    }
    char filtro[30];

    printf("Digite o titulo do livro a ser buscado:\n");
    fflush(stdin);
    gets(filtro);

    for (int j = 0; j < 5; j++)
        if(strcmp(filtro, livros[j].titulo) == 0)
            printf("\n Livro %d \n Titulo: %s  , Autor: %s  , Ano: %d \n",j+1,livros[j].titulo, livros[j].autor, livros[j].ano);
    
    return 0;
}
