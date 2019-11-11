#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct	Agenda {
    char compromisso[60];
    Data data; 
}Agenda;

int main(int argc, char const *argv[])
{
    Agenda agenda[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n Agenda %d \n",i+1);

        printf("Digite o compromisso:\n");
        fflush(stdin);
        gets(agenda[i].compromisso);

        printf("Digite o dia:\n");
        scanf("%d",&agenda[i].data.dia);
        
        printf("Digite o mes:\n");
        scanf("%d",&agenda[i].data.mes);

        printf("Digite o ano:\n");
        scanf("%d",&agenda[i].data.ano);
    }
    int m = 1, a = 2019;
    while(m != 0){
        printf("Digite o mes a ser procurado:\n");
        scanf("%d",&m);
        
        printf("Digite o ano a ser procurado:\n");
        scanf("%d",&a);

        for (int j = 0; j < 5; j++)
        {
            if(agenda[j].data.mes == m && agenda[j].data.ano == a)
                printf("\n Agenda %d \n Compromisso: %s , Data: %d/%d/%d \n",j+1,agenda[j].compromisso,agenda[j].data.dia,agenda[j].data.mes, agenda[j].data.ano);
        
        }
           
    }
    
    return 0;
}
