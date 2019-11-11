#include <stdio.h>
#include <stdlib.h>

typedef struct dma {
    int dia;
    int mes;
    int ano;
}dma;

int main(int argc, char const *argv[])
{
    dma datas[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\n Data %d \n",i+1);

        printf("Digite o dia:\n");
        scanf("%d",&datas[i].dia);
        
        printf("Digite o mes:\n");
        scanf("%d",&datas[i].mes);

        printf("Digite o ano:\n");
        scanf("%d",&datas[i].ano);
    }
    
    
    return 0;
}

