#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char data[20];
    char dia[7][7] = {('1','Domingo')};
    scanf("%s",&data);
    printf("%s",dia[0][0]);
    system("pause");
}
