#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	Aluno {
    char nome[100],
    matricula[100];
    float media; 
}Aluno;

int main(int argc, char const *argv[])
{
    Aluno alunos[10],aprovados[10],reprovados[10];
    int a = 0, r = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Aluno %d \n \n",i+1);
        
        printf("Digite seu nome:\n");
        fflush(stdin);
        gets(alunos[i].nome);

        printf("Digite sua matricula:\n");
        fflush(stdin);
        gets(alunos[i].matricula);
        
        printf("Digite a media:\n");
        scanf("%f",&alunos[i].media);

        if(alunos[i].media < 5.0){
            reprovados[r] = alunos[i];
            r++;
        }
        else{
            aprovados[a] = alunos[i];
            a++;
        }
    }
    system("cls");
    printf("\n APROVADOS: \n \n");
    for (int j = 0; j < a; j++)
        printf("Nome: %s \t Matricula: %s \t Media:%f   APROVADO\n ",aprovados[j].nome,aprovados[j].matricula,aprovados[j].media);
    printf("\n REPROVADOS: \n \n");    
    for (int j = 0; j < r; j++)
        printf("Nome: %s \t Matricula: %s \t Media:%f   REPROVADO\n ",reprovados[j].nome,reprovados[j].matricula,reprovados[j].media);
    return 0;
}
