#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include <stdbool.h>



char delim[] = " ";

int main()
{
        int qtd = 5;
        printf("Digite a quantidade de nomes:\n");
        scanf("%d",&qtd);
        char nomes [qtd][100];

        int j = -1;
        while(j < qtd)
        {
            if(j > -1)
            {
        	printf ("\n Digite um nome: ");
        	fflush(stdin);
        	gets (nomes[j]);

            int init_size = strlen(nomes[j]);
            char *ptr = strtok(nomes[j], delim);

            while(ptr != NULL)
            {
                int valido = 1;

                for(int letra = 0; letra < strlen(ptr); letra ++){
                    if(!isalpha(ptr[letra]))
                    {
                        valido =0;
                        break;
                    }
                }
                if(valido ==0) {
                    printf("Nome com caracteres invalidos!");
                    break;
                }
                ptr = strtok(NULL, delim);
            }

            }
            j++;
        }


        for(int n = 0; n < qtd -1; n++){
                j = n + 1;
                while(j < qtd)
                {
                    if(strcmp(nomes[n],nomes[j]) == 0)
                    {
                         printf("Nomes : %s  == %s  \n", nomes[n], nomes[j]);
                    }

                    j++;
                }
        }
    system("pause");
}




