
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


char matriz[3][3];/*tabuleiro do jogo*/
int i,j;  /*controle de linha e coluna do tabuleiro*/
int x, y; /* controle da jogada*/
int inicio; /* controle de jogo acontecendo*/
int empate;/*contador de campos ocupados no tabuleiro*/
int ganhou;/*indicador de vit�ria da pessoa*/
int perdeu;/*indicador de derrota da pessoa*/


void inicia_matriz()
{
     for (i=0; i<3; i++)
     {
         for (j=0; j<3; j++) matriz[i][j] = '_';
     }

}

void mostra_tela()
{
     system("cls");
     puts(" * * * JOGO DA VELHA * * *");
     for (i=0; i<3; i++)
     {
         printf ("\n");
         for (j=0; j<3; j++)
         {
             printf ("%c", matriz[i][j]);

             if (j < 3) printf (" ");

         }
     }

}

/*solicita jogada da pessoa*/
void pessoa_jogar()
{
     int vld=0; /* controle de jogada valida*/
     while ((vld==0)&&(empate<9)&&(inicio==1))
     {
           printf ("\n\n");
           puts("Informe a linha (1,2,3): ");
           scanf("%d", &x);
           puts("Informe a coluna(1,2,3): ");
           scanf("%d", &y);
           x -= 1;  //x=x-1;
           y -= 1;  //y=y-1;
           if((x<3)&& (y<3) && (matriz[x][y] =='_')) vld=1;//jogada vaslida
           mostra_tela();
      }

}
/*gerar um numero aleatorio para computador jogar, menor que 3*/
int gerar()
{
    return (rand()%3);

}


/*computador escolhe uma jogada aleatoria*/
void computador_jogar()
{
     int a, b;

     do
     {
         a=gerar();
         b=gerar();
     } while((matriz[a][b] !='_')&&(empate<9)&&(inicio==1));
     x = a;
     y = b;
}

void marca_campo(char q)
{
   if ((empate<9)&&(ganhou ==0)&&(perdeu ==0)){
     matriz[x][y] = q;
     empate++;
     mostra_tela();}

}

void verifica_vitoria(){
     char campos[3];
     for (i=0; i<3; i++)
     {  /*verifica se ocorreu fechamento de uma linha*/
         for (j=0; j<3; j++) campos[j] = matriz[i][j];
            if ((campos[0] == campos[1]) && (campos[1] ==campos[2]))
            {
               if (campos[0] == 'X') ganhou = 1;
               if (campos[0] == 'O') perdeu = 1;
            }
     }

     for (i=0; i<3; i++)
     {   /*verifica se ocorreu fechamento de uma coluna*/
         for (j=0; j<3; j++) campos[j] = matriz[j][i];
         if ((campos[0] == campos[1]) && (campos[1] ==campos[2]))
         {
            if (campos[0] == 'X') ganhou = 1;
            if (campos[0] == 'O')perdeu = 1;
         }
     }
     /*verifica se ocorreu fechamento na diagonal*/
     if ((matriz[0][0] == matriz[1][1]) && (matriz[2][2] == matriz[0][0]))
     {
          if (matriz[0][0] == 'X') ganhou = 1;
          if (matriz[0][0] == 'O') perdeu = 1;
     }
     /*verifica se ocorreu fechamento na outra diagonal*/
     if ((matriz[0][2] == matriz[1][1]) && (matriz[2][0] == matriz[1][1]))
     {
          if (matriz[1][1] == 'X')ganhou = 1;
          if (matriz[1][1] == 'O')perdeu = 1;
     }
            /*verfica se pessoa ganhou*/
      if (ganhou == 1)
      {
        mostra_tela();
        puts("\nVoce ganhou!");
        inicio=0;

      }
     /*verifica se pessoa perdeu*/
     if (perdeu == 1)
     {
        mostra_tela();
        puts(" \nVoce perdeu!");
        inicio=0;


     }
 /*verifica possibilidade de empate*/
      if ((empate ==9)&&(ganhou ==0)&&(perdeu ==0))
      {
        mostra_tela();
        puts("\nDEU VELHA!");
        inicio=0;
      }

}

int main()
{
      srand ((unsigned) time(NULL));
      char jogar='s';
      int quem;
      do
      {
        empate=0;
        ganhou = 0;
        perdeu = 0;
        inicio=1;
        inicia_matriz();
        mostra_tela();
        quem=rand()%2;/* sorteio de quem comea a jogar*/
        if(quem==0)
          while (inicio==1)
           {
                 pessoa_jogar();
                 marca_campo('X');//pessoa joga com X
                 verifica_vitoria();
                 computador_jogar();
                 marca_campo('O');//computador joga com 0
                 verifica_vitoria();
             }

        else
            while (inicio==1)
             {
                 computador_jogar();
                 marca_campo('O');
                 verifica_vitoria();
                 pessoa_jogar();
                 marca_campo('X');
                 verifica_vitoria();
              }
     printf("\nDeseja jogar novamente (s/n)?");
     jogar=getch();
     } while(jogar=='s');
     return 0;
  }
