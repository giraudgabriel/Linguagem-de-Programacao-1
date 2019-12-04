#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char
    const * argv[]) {

   static const char filename[] = "arq.txt";
   FILE *file = fopen (filename, "r" );

   typedef struct cidade{
        char populacao[100];
        char nome[100];
   }CIDADE;

   CIDADE cidades [40];
   if (file != NULL)
   {
      char linha[40];
      int j = 0;
      while (fgets(linha, sizeof linha, file) != NULL)
      {
         for(int i=0; i < strlen(linha); i++){
            if(isalpha(linha[i])){

            }

            if(isdigit(linha[i])){

            }
         }
         j++;

      }
      fclose (file);
   }
   else
   {
      perror (filename);
   }
   return 0;

}
