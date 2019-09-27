#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int exercicio = 0;
    printf("Selecione um exercicio: 1 a 10 \n");
    scanf("%d",&exercicio);

    switch(exercicio){
    case 1:
        ex1();
        break;
    case 2:
        printf("Gabriel tem %d letras \n",ex2("gabriel"));
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4();
        break;
    return 0;
}
bool startsWith(const char *pre, const char *str)
{
    size_t lenpre = strlen(pre),
           lenstr = strlen(str);
    return lenstr < lenpre ? false : memcmp(pre, str, lenpre) == 0;
}

void ex1(){
    printf("PROGRAMA 1 \n \n");
    char algo[50];
    printf("Digite algo:\n");
    scanf("%s",algo);
    printf("Voce digitou: \n %s",algo);
}

int ex2(char *str){
    int len = 0;
    int i;

    for (i=0; str[i] != 0; i++)
    {
        len++;
    }
    return(len);
}


void ex3(){
    char nome[50];
    printf("Digite um nome:\n");
    scanf("%s",&nome);
    if(startsWith("a",nome) || startsWith("A",nome)) printf("Seu nome e %s: \n",nome);
}

void ex4(){
    char nome[50];
    printf("Digite um nome:\n");
    scanf("%s",&nome);
    printf("%c%c%c%c",nome[0],nome[1],nome[2],nome[3]);
}
