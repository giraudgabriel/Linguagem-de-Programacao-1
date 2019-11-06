#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	Aluno {
    char matricula[100];
    char nome[100];
    char disciplina[20];
    float nota1;
    float nota2;
}	Aluno;

int main(int argc, char const *argv[])
{
    Aluno alunos[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\n \n Aluno %d \n ",i+1);
        
        printf("Digite a matricula:\n");
        fflush(stdin);
        gets(alunos[i].matricula);

        printf("Digite o nome:\n");
        fflush(stdin);
        gets(alunos[i].nome);

        printf("Digite a disciplina:\n");
        fflush(stdin);
        gets(alunos[i].disciplina);

        printf("Digite a nota 1:\n");
        scanf("%f",&alunos[i].nota1);

        printf("Digite a nota 2:\n");
        scanf("%f",&alunos[i].nota2);
    }

    for (int j = 0; j < 10; j++)
    {
        float media = ((alunos[j].nota1) + (alunos[j].nota2 * 2)) / 2;
        printf("Aluno: \t %s\t Nota: \t %f \n",alunos[j].nome,media);
    }

    return 0;
}
