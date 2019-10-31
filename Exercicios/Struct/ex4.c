#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	Aluno {
    char nome[50];
    int matricula;
    float notas[3];
    float media;
    char curso[50];
}	Aluno;

int compararIdade(const void *a, const void *b)
{
    float media1 = ((struct Aluno*)a)->media;
    float media2 = ((struct Aluno*)b)->media;
    
    if(media1 > media2)return 1;
    if(media1 < media2)return -1;
    return 0;
}

int main(int argc, char const *argv[])
{
    Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        //curso
        printf("Digite o nome do curso do aluno %d: \n",i+1);
        fflush(stdin);
        gets(alunos[i].curso);

        //nome
        printf("Digite o nome do aluno %d: \n",i+1);
        fflush(stdin);
        gets(alunos[i].nome);

        //matricula
        printf("Digite a matricula do aluno %d:\n",i+1);
        scanf("%d",&alunos[i].matricula);
            
        //notas
        for (int k = 0; k < 3; k++)
        {
            printf("Digite a nota %d: \n", i+1);
            scanf("%f",&alunos[i].notas[k]);
            alunos[i].media += alunos[i].notas[k];
            alunos[i].media /= k == 2 ? 3 : 1;
        }
        printf("%s \n",(alunos[i].media>= 6.0 ? "Aprovado": "Reprovado"));
    }
    qsort(alunos,5,sizeof(Aluno),compararIdade);
    printf("Maior media : \n Aluno: %s \t Media:%f \n",alunos[0].nome,alunos[0].media);
    
    return 0;
}
