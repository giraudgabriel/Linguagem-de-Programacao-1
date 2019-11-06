#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct CoordenadaPolar {
    float raio;
    float argumento;
}CoordenadaPolar;

int main()
{
    CoordenadaPolar polar[1];

    printf("Digite o valor do raio:\n");
    scanf("%f",&polar[0].raio);

    printf("Digite o valor do argumento:\n");
    scanf("%f",&polar[0].argumento);

    float x = polar[0].raio * cos(polar[0].argumento);;
    float y = polar[0].raio * sin(polar[0].argumento);;

    printf("\n No plano cartesiano (x,y) = (%f,%f)",x,y);

    return 0;
}
