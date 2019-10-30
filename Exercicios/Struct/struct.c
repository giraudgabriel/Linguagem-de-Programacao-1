#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){

    typedef struct p{
        int idade;
    }PESSOA;

    PESSOA pessoa[1];

    pessoa[0].idade = 1;
    printf("Idade da pessoa %d",pessoa[0].idade);
}