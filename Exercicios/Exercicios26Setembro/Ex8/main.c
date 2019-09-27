#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int aluno = 0;
    int maxAluno = 3;
    char *alunos[3][10];
    int i = 0;
    char gabarito[10];

    while(i<10){
        printf("\n Digite o gabarito da questao %d : \n", i+1);
        scanf(" %c", &gabarito[i]);
        printf("\n LETRA: %c \n",gabarito[i]);
        i++;
    }

    for(aluno = 0; aluno < maxAluno; aluno++){
        printf("Digite a matricula do aluno:");
        char matricula[50];
        scanf("%s",&matricula);
        const char *questoes;
        int nota = 0;
        for(int questao = 0; questao < 10; questao++){
            printf("Digite a resposta da questao %d:\n",questao+1);
            questoes[questao] = getchar();
            if(strcmp(questoes[questao],gabarito[questao]) == 0){
                nota+= 1;
            }
        }
        alunos[aluno] = {matricula,{questoes},nota};

        printf("%d",&nota);
    }

    return 0;
}
