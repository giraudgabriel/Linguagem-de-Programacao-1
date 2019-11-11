#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	Carro {
    char marca[15];
    int ano;
    float preco;
}Carro;

int main(int argc, char const *argv[])
{
    Carro carros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n Carro %d \n",i+1);

        printf("Digite a marca: \n");
        fflush(stdin);
        gets(carros[i].marca);

        printf("Digite o ano do carro:\n");
        scanf("%d",&carros[i].ano);
        
        printf("Digite o preco do carro:\n");
        scanf("%f",&carros[i].preco);
    }
    float p = 1;
    while(p != 0){
        printf("\n Digite um valor para buscar:\n");
        scanf("%f",&p);
        for (int j = 0; j < 5; j++)
            if(carros[j].preco < p) printf("\n Carro %d \n Marca: %s Ano: %d  Preco: %0.2f",j+1,carros[j].marca,carros[j].ano, carros[j].preco);
    }
    
    return 0;
}
