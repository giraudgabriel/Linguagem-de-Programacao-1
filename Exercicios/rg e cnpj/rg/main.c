#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
char *rg;
char  rgs[20][9];
int j = 0;
int tem = 0;
int i = 0;
int inicio = 0;
int main()
{
    int opcao = 1;
    int init = 0;
    srand(time(NULL));
    while(opcao != 0){
        printf("\n Escolha uma das opcoes: \n");
        printf("0- Sair \n");
        printf("1- Ler um RG\n");
        printf("2- Preencher 3 RGS automaticamente\n");
        printf("3- Verificar Validacao RG\n");
        printf("4- Listar rgs com numero digitado \n");
        scanf("%d",&opcao);
        switch(opcao){
        case 1:
            if(i < 20)
            {
                printf("Digite um rg: \n");
                fflush(stdin);
                gets(rgs[i]);
                i++;
            }
            break;
        case 2:
               init = 0;
                while(init < 3)
                {
                    if(i < 20)
                    {
                        printf("Digite um rg: \n");
                        fflush(stdin);
                        gets(rgs[i]);
                        validarRg(i,1);
                        i++;
                        init++;
                    }
                    else
                        init = 3;
                }
            break;
        case 3:
        for(int m = 0; m < i ; m++) printf(" \n %d) %s \n", m, rgs[m]);
            if(i > 0)
            {
                printf(" \n Escolha um rg pra validar: \n");
                int posicao = 0;
                scanf("%d",&posicao);
                if(validarRg(posicao) == 0) printf(" \n Rg:  %s  invalido! \n \n",rgs[posicao]);
                if(validarRg(posicao) == 1) printf(" \n Rg:  %s  valido! \n \n",rgs[posicao]);
            }
            else
            {
                    printf("Cadastre algum rg antes de continuar... \n");
                    opcao = 1;
            }
            break;
        case 4:
            printf("\n Digite um digito inicializador: \n");
            scanf("%d", &inicio);
            listarRgs(inicio);
            break;
        case 0:
            printf("\n \nSaindo ...");
            break;
        default:
            printf(" \n  \nOpcao invalida!");
        }
    }
    return 0;
}

int validarRg(int posicao, int gerarVerificador){
    int i = 0;
    int total = 0;
    int resto = 0;
    char verificador = 'X';

    for(i = 0; i < 8; i++){
       int  num =  rgs[posicao][i] - 48 ;
       total += num * (i + 2);
    }
    resto = total % 11;
    verificador = 11 - resto + '0';

    if(verificador == 11)
    {
        verificador = '0';
    }
    else if(verificador == 10)
    {
            verificador = 'x';
    }
    if(gerarVerificador)
    {
        printf("%s%c \n",rgs[posicao],verificador);
    }
            if(rgs[posicao][8] == verificador)
                return 1;
    return 0;
}

void listarRgs(int inicio)
{
    printf("RGs que comecam com %d: \n \n", inicio);
    for(int i = 0; i < 20; i ++){
        int num = rgs[i][0] - 48;
        if(num == inicio)
        {
            printf("RG: %s \n", rgs[i]);
        }
    }
}

//void gerarRg()
//{
//    int k = 0;
//    int menor = 0;
//    int maior = 9;
//    int maxGerar = 3;
//    if(19 - i < 3)maxGerar = 19 - i;
//    while(k < maxGerar)
//    {
//        int j = 0;
//        while(j < maior)
//        {
//            char random =  ((rand() % (maior - menor + 1)) + menor) +'0';
//            rgs[i][j] = random;
//            if(j == maior -1 && validarRg(i) == 1)
//                j++;
//            else
//                j = 0;
//        }
//            printf("%s \n", rgs[i]);
//        i++;
//        k++;
//    }
//}

