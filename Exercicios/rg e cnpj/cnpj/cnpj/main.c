#include <stdio.h>

#include <stdlib.h>

#include <stdlib.h>

#include <string.h>

char * cnpj;
char cnpjs[20][14];
int j = 0;
int tem = 0;
int i = 0;
int inicio = 0;
int main() {
    int opcao = 1;
    int init = 0;
    srand(time(NULL));
    while (opcao != 0) {
        printf("\n Escolha uma das opcoes: \n");
        printf("0- Sair \n");
        printf("1- Ler um cnpj\n");
        printf("2- Preencher 3 cnpjs automaticamente\n");
        printf("3- Verificar Validacao cnpj\n");
        printf("4- Listar cnpjs com numero digitado \n");
        scanf("%d", & opcao);
        switch (opcao) {
            case 1:
                if (i < 20) {
                    printf("Digite um cnpj: \n");
                    fflush(stdin);
                    gets(cnpjs[i]);
                    i++;
                }
                break;
            case 2:
                init = 0;
                while (init < 3) {
                    if (i < 20) {
                        printf("Digite um cnpj: \n");
                        fflush(stdin);
                        gets(cnpjs[i]);
                        validarCnpj(i, 1);
                        i++;
                        init++;
                    } else
                        init = 3;
                }
                break;
            case 3:
                for (int m = 0; m < i; m++) printf(" \n %d) %s \n", m, cnpjs[m]);
                if (i > 0) {
                    printf(" \n Escolha um cnpj pra validar: \n");
                    int posicao = 0;
                    scanf("%d", & posicao);
                    if (validarCnpj(posicao, NULL) == 0) printf(" \n cnpj:  %s  invalido! \n \n", cnpjs[posicao]);
                    if (validarCnpj(posicao, NULL) == 1) printf(" \n cnpj:  %s  valido! \n \n", cnpjs[posicao]);
                } else {
                    printf("Cadastre algum cnpj antes de continuar... \n");
                    opcao = 1;
                }
                break;
            case 4:
                printf("\n Digite um digito inicializador: \n");
                scanf("%d", & inicio);
                listarCnpjs(inicio);
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

int validarCnpj(int posicao, int gerarVerificador) {
    int verificador1 = 0, verificador2 = 0;
    int v1[12] = {5,4,3,2,9,8,7,6,5,4,3,2}, v2[13] = {6,5,4,3,2,9,8,7,6,5,4,3,2};

    int somaVerificador1 = 0, restoVerificador1 = 0;
    int somaVerificador2 = 0, restoVerificador2 = 0;

    if (strlen(cnpjs[posicao]) != 0) {

        //verificador 1 e 2
        int i = 0;
        while (i < 12) {
            int num = cnpjs[posicao][i] - 48;
            somaVerificador1 += num * v1[i];
            somaVerificador2 += num * v2[i];
            i++;
        }
        //verificador1
        restoVerificador1 = somaVerificador1 % 11;
        verificador1 = (restoVerificador1 < 2) ? 0 : 11 - restoVerificador1;

        //verificador2
        somaVerificador2 += (verificador1) * 2;
        restoVerificador2 = somaVerificador2 % 11;
        verificador2 = (restoVerificador2 < 2) ? 0 : 11 - restoVerificador2;

        if(gerarVerificador)
            printf("%s%d%d",cnpjs[posicao],verificador1,verificador2);

        if(verificador1 == cnpjs[posicao][12] - 48 && verificador2 == cnpjs[posicao][13] - 48)
            return 1;
    }

    return 0;
}

void listarCnpjs(int inicio) {
    printf("cnpjs que comecam com %d: \n \n", inicio);
    for (int i = 0; i < 20; i++) {
        int num = cnpjs[i][0] - 48;
        if (num == inicio) {
            printf("cnpj: %s \n", cnpjs[i]);
        }
    }
}