#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	Eletrodomestico {
    char nome[15];
    float potencia;
    float tempo;
    float consumo;
} Eletrodomestico;

int main()
{
    Eletrodomestico eletrodomesticos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n Eletrodomestico %d \n",i+1);

        printf("Digite o nome do eletrodomestico:\n");
        fflush(stdin);
        gets(eletrodomesticos[i].nome);

        printf("Digite a potencia do eletrodomestico em kW:\n");
        scanf("%f",&eletrodomesticos[i].potencia);
        
        printf("Digite o tempo ativo por dia (em horas) :\n");
        scanf("%f",&eletrodomesticos[i].tempo);
    }
    int dias = 0;
    float consumoTotal = 0;

    printf("Digite uma quantidade de dias:\n");
    scanf("%d",&dias);

    //Consumo Total
    for (int j = 0; j < 5; j++){
        eletrodomesticos[j].consumo = (eletrodomesticos[j].potencia * eletrodomesticos[j].tempo) * dias;
        consumoTotal +=  eletrodomesticos[j].consumo;
    }

    printf("\n Consumo total: %0.2f kW \n",consumoTotal);

    //Porcentagem
    for (int j = 0; j < 5; j++)
        printf("%s : %0.2f kW  -> %0.2f %% \n",eletrodomesticos[j].nome,eletrodomesticos[j].consumo, (eletrodomesticos[j].consumo/consumoTotal) * 100);

    return 0;
}
