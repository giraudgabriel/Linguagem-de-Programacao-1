#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

int validarCPF(char *cpf)
{
    int i, j, a = 0, b = 0;
    if(strlen(cpf) != 11)
        return 0;
    else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0))
        return 0;
    else
    {
        for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--) a += (cpf[i]-48) * j;

        a %= 11;

        if(a < 2) a = 0;

        else a = 11 - a;

        if((cpf[9]-48) != a)return 0;
        else
        {
            for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--) b += (cpf[i]-48) * j;

            b %= 11;

            if(b < 2) b = 0;

            else b = 11 - b;

            if((cpf[10]-48) != b) return 0;
        }
    }
    return 1;
}

printf("%d",validarCPF("50388242850"));

system("pause");
}
