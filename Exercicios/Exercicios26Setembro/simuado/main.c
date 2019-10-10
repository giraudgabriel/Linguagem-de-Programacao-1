#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

int i = 0, j= 0;

char nm[5][1], aux[1];

for (i = 0; i < 5; i++) {
   printf("\nLetra %i: ", i+1);
   scanf("%s",nm[i]);
}


for (i = 1; i < 5; i++) {
   for (j = 1; j < 5; j++)
      if (strcmp(nm[j - 1], nm[j]) > 0) {
         strcpy(aux, nm[j - 1]);
         strcpy(nm[j - 1], nm[j]);
         strcpy(nm[j], aux);
      }
   }

for (i = 0; i < 5; i++)
   printf("\n %s", nm[i]);

   return 0;
}
