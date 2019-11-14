#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *f;

    f = fopen("arquivo.txt","r");

    if(f == NULL){
        printf("Erro na abertura ! \n");
        system("pause");
        exit(1);
    }
    char c = fgetc(f);

    while(c != EOF)
    {
        printf("%c",c);
        c = fgetc(f);
    }
    printf("\n Fim \n");
    
    fclose(f);
    
    system("pause");
    return 0;
}
