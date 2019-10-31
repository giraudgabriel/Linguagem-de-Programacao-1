#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	Aluno {
    char nome[50];
    int matricula;
    char curso[50];
}	Aluno;

int main(int argc, char const *argv[])
{
    Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %d: \n",i+1);
        fflush(stdin);
        gets(alunos[i].nome);

        printf("Digite a matricula do aluno %d:\n",i+1);
        scanf("%d",&alunos[i].matricula);

        printf("Digite o nome do curso do aluno %d: \n",i+1);
        fflush(stdin);
        gets(alunos[i].curso);            
    }

    for (int i = 0; i < 5; i++)
        printf("Aluno: %s \t matricula: %d \t curso: %s \n",alunos[i].nome,alunos[i].matricula,alunos[i].curso);           
    
    return 0;
}
