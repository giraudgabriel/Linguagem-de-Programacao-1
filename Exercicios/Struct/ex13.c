#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa {
    char nome[100], 
    endereco[100], 
    dataNascimento[10],
    cidade[100], 
    cep[9],
    email[100]  
}Pessoa;

int validarData(char data[10]){
    int dia = (data[0]+data[1]) -48;
    int mes = (data[3]+data[4]) -48;
    int ano = (data[6]+data[7]+data[8]+data[9]) -48;

    if(dia < 1 || dia > 31) return 0;
    if(mes < 1 || mes > 12) return 0;
    if(ano > 2019) return 0;

    return 1;
}

int validarCep(char cep[9]){
    for (int i = 0; i < 9; i++)
    {
        if(cep[i] == '-' || isdigit(cep[i]-48))
            continue;
        else
             return 0;
    }
    return 1;
}

int validarEmail(char email[100]){
  int tam=strlen(email);
  int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;

  for (i = 0; i < tam; i++) {
    char c = email[i];
    if(c == '@') {
      if (arroba) return 0;
      arroba = 1;
      if (i < 3) return 0;
    }
    else if (arroba) { 
      if (ponto) depoisPonto++;
      else if(c == '.') {
        ponto = 1;
        if (antesPonto < 3) return 0;
      }
      else 
        antesPonto++;
    }
  } 
  if (i == tam && depoisPonto > 1) return 1;
  return 0;
}

int main(int argc, char const *argv[])
{
    Pessoa pessoa[1];
    int valido = 1;

    while(valido == 1)
    {
    printf("Digite seu nome:\n");
    fflush(stdin);
    gets(pessoa[0].nome);

    printf("Digite seu endereco:\n");
    fflush(stdin);
    gets(pessoa[0].endereco);

    printf("Digite sua data de nascimento:\n");
    fflush(stdin);
    gets(pessoa[0].dataNascimento);

    if(validarData(pessoa[0].dataNascimento) == 0){
        printf("\nData inválida! \n");
        valido = 0;
        break;
    }

    printf("Digite sua cidade:\n");
    fflush(stdin);
    gets(pessoa[0].cidade);

    printf("Digite seu cep:\n");
    fflush(stdin);
    gets(pessoa[0].cep);
    
    if(validarCep(pessoa[0].cep) == 0)
    {
        printf("\n Cep inválido! \n");
        valido = 0;
        break;
    }
    
    printf("Digite seu email:\n");
    fflush(stdin);
    gets(pessoa[0].email);

    if(validarEmail(pessoa[0].email) == 0){
        printf("\n Email inválido! \n"); 
        valido = 0;
        break;   
    }
    }
    
    return 0;
}
