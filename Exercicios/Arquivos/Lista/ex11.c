#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    FILE *fr1;
    char arquivo1[200], palavra[200];
    int flag = 0, contador = 0, i = 0;

    printf("Digite o caminho do arquivo a ser lido:\n");
    fflush(stdin);
    gets(arquivo1);

    printf("Digite uma palavra a ser contada:\n");
    fflush(stdin);
    gets(palavra);

    fr1 = fopen(arquivo1, "r");
    if (fr1 == NULL)
    {
        printf("Algo deu errado ao ler o arquivo!\n");
        system("pause");
        exit(1);
    }

    while (!feof(fr1))
    {
        flag = 0;
        for (i = 0; i < sizeof(palavra) / sizeof(palavra[0]); i++)
        {
            if (getc(fr1) != palavra[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            contador++;
    }

    printf("\n A palavra %s apareceu : %d vezes!\n", palavra, contador);

    fclose(fr1);
    return 0;
}
