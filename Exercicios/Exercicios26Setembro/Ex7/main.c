#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[5][30];
    int i = 0;
    int indice = 0;
    int caminho = 0;

    while(i < 5){
        printf("Entre com o %d nome: ", i + 1);
        fgets(nome[i], 30, stdin);
        i++;
    }
    printf("Escolha uma opção : \n");
    printf("1 : imprimir os nomes em ordem alfabética; \n");
    printf("2 : imprimir os nomes em letras maiúsculas; \n");
    printf("3 : informar apenas um nome baseado no indice\n");
    scanf("%d",&caminho);

    switch(caminho){
    case 1:
        OrdemAlfabetica(nome);
        break;
    case 2:
        Maiusculo(nome);
        break;
    case 3:
        printf("Digite um indice: \n");
        scanf("%d",&indice);
        MostrarNome(nome,indice);
        break;
    }



    return 0;
}
void OrdemAlfabetica(char nome[5][30])
{
    char aux[30];
    int i = 0;
    int j;

    for(j=1; j<5; j++)
    {
        strcpy(aux,nome[j]);
        i = j-1;

        while(i >= 0 && strcmp(nome[i], aux) > 0)
        {
            strcpy(nome[i+1],nome[i]);
            i--;
        }
        strcpy(nome[i+1],aux);
    }


    printf("\n\n Nomes em ordem alfabetica: \n");
    i = 0;
    while(i < 5){
        printf("\n%s",nome[i]);
        i++;
    }
}

void Maiusculo(char nome[5][30]){
    int i = 0;
    while(i < 5){
        printf("\n%s",toupper(nome[i]));
        i++;
    }

}

void MostrarNome(char nome[5][30], int indice){
    printf(" \n %s \n",nome[indice]);
}
