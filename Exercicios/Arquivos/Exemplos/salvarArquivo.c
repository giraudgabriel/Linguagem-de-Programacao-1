#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *f;

    f = fopen("arquivo.txt","w");

    if(f == NULL){
        printf("Erro na abertura ! \n");
        system("pause");
        exit(1);
    }
    char texto[20] = "Meu programa em C";

    for (int i = 0; i < strlen(texto); i++)
        fputc(texto[i],f);
    
    fclose(f);
    
    system("pause");
    return 0;
}
