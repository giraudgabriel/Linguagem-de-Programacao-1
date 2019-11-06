#include <stdio.h>
#include <stdlib.h>

typedef struct Vetor {
    float x;
    float y;
    float z;
} Vetor;

int main(int argc, char const * argv[]) {

    Vetor vetores[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o valor de x do vetor %d \n:", i + 1);
        scanf("%f",&vetores[i].x);

        
        printf("Digite o valor de y do vetor %d \n:", i + 1);
        scanf("%f",&vetores[i].y);

        
        printf("Digite o valor de z do vetor %d \n:", i + 1);
        scanf("%f",&vetores[i].z);
    }

    Vetor soma;
    soma.x = vetores[0].x + vetores[1].x;
    soma.y = vetores[0].y + vetores[1].y;
    soma.z = vetores[0].z + vetores[1].z;

    printf("\n O valor total de x: %f",soma.x); 
    printf("\n O valor total de y: %f",soma.y); 
    printf("\n O valor total de z: %f",soma.z); 
    printf("\n O valor total da soma e: %f",soma.x+soma.y+soma.z);
    return 0;
}