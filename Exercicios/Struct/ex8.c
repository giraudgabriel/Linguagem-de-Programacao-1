#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	Funcionario {
    char nome[100];
    int idade;
    char sexo[1];
    char cpf[12];
    char dataNascimento[8];
    int setor;
    char cargo[30];
    float salario;
}	Funcionario;


int main(int argc, char const *argv[])
{
    Funcionario funcionario[1];

    printf("Digite o nome:\n");
    fflush(stdin);
    gets(funcionario[0].nome);


    printf("Digite a idade:\n");
    scanf("%d",&funcionario[0].idade);

    printf("Digite o sexo:\n");
    fflush(stdin);
    gets(funcionario[0].sexo);

    printf("Digite o cpf:\n");
    fflush(stdin);
    gets(funcionario[0].cpf);


    printf("Digite a data de nascimento:\n");
    fflush(stdin);
    gets(funcionario[0].dataNascimento);

    printf("Digite o setor:\n");
    scanf("%d",&funcionario[0].setor);

    printf("Digite o cargo:\n");
    fflush(stdin);
    gets(funcionario[0].cargo);

    
    printf("Digite o salario:\n");
    scanf("%f",&funcionario[0].salario);

    printf(" Nome: %s \n Idade: %d \n Sexo: %s \n CPF: %s \n Data de Nascimento: %s \n Setor: %d \n Cargo: %s \n Salario:%f \n",funcionario[0].nome,funcionario[0].idade,funcionario[0].sexo,funcionario[0].cpf,funcionario[0].dataNascimento, funcionario[0].setor, funcionario[0].cargo, funcionario[0].salario);

    return 0;
}
