#include <stdio.h>
#include <stdlib.h>

typedef struct z { int a,b; }z;

int main(int argc, char const *argv[])
{
    z imaginary[3],sm[1],sb[1],mp[1];

    for (size_t i = 0; i < 2; i++)
    {
        printf("Digite o valor de a:\n");
        scanf("%d",&imaginary[i].a);
        printf("Digite o valor de b:\n");
        scanf("%d",&imaginary[i].b);
    }
    //soma
    sm[0].a = imaginary[0].a + imaginary[1].a;
    sm[0].b = imaginary[0].b + imaginary[1].b;
    printf("Soma: %d + %di \n",sm[0].a, sm[0].b);

    //subtracao
    sb[0].a = imaginary[0].a - imaginary[1].a;
    sb[0].b = imaginary[0].b - imaginary[1].b;
    printf("Subtracao: %d + %di \n",sb[0].a, sb[0].b);

    //multiplicacao
    mp[0].a = (imaginary[0].a * imaginary[1].a) - (imaginary[0].b * imaginary[1].b);
    mp[0].b = (imaginary[0].a * imaginary[1].b) + (imaginary[0].b * imaginary[1].a);
    printf("Multiplicacao: %d + %di \n",mp[0].a,mp[0].b);

    return 0;
}
