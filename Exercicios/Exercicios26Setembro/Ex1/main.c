#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//ingles / portugues / espanhol / italiano
char dic [][11]={"cat","gato","gato","gatto",
                "dog","cachorro","perro","cane",
                "is", "�","es","�",
                "bad","ruim","malo","cattivo",
                "region","regi�o","regi�n","regione",
                "shepherds","pastores","pastores","pastori",
                "field","campo","campo","campo",
                "flock","rebanho","reban�","gregge",
                "night","noite","noche","notte",
                "angel","anjo","�ngel","angelo",
                "Lord","senhor","sen�r","signor",
                "glory","gl�ria","gloria","gloria",
                "great","grande","gran","grande",
                "fear","medo","miedo","paura",
                "God","Deus","Dios","Dio",
                "good","bom","bueno","buono",
                "day","dia","d�a","giorno",
                "city","cidade","ciudad","citt�",
                "baby","beb�","beb�","bambino",
                "earth","terra","tierra","terra",
                "peace","paz","paz","pace",
                "highest","mais alto","m�s alto","superiore",
                "to","para","para","a",
                "in","em","en","in",
                "crazy","louco","loco","pazzo",
                "easy","f�cil","f�cil","facile",
                "money","dinheiro","dinero","soldi",
                "key","chave","clave","chiave",
                "movie","filme","filme","film",
                "trash","lixo","basura","spazzatura",
                "worst","pior","peor","peggio",
                "singer","cantor","cantante","cantante",
                "people","pessoas","personas","persone",
                "flame","chama","llama","fiamma",
                 "","","","",};
char frase [50];
char palavra [11];
char *p;



void pega_palavra()
 {
  char *q;
  q=palavra;
  while (*p && *p!=' ')
  {
      *q=*p;
      p++;
      q++;
  }
  if (*p==' ')p++;
  *q='\0';
 }


 int traducao (int idiomaEntrada, int idiomaSaida)
 {
     int i;
     int saida = idiomaSaida - idiomaEntrada;
     for(i=idiomaEntrada;*dic[i];i=i+4)
     {

        if(strcmp(dic[i],palavra)==0) break;
     }

    if(*dic[i]) return (i+saida);
    else return (-1);
 }

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char opcao='s';
    int linha;
    int idiomaEntrada=10, idiomaSaida=11;
    while(opcao=='s')
    {
        printf("\n1)Ingl�s\n2)Portugu�s\n3)Espanhol\n4)Italiano\n");
        printf("\nInforme o idioma da frase a ser traduzida: ");
        scanf("%d",&idiomaEntrada);
        idiomaEntrada=idiomaEntrada-1;
        printf("\nInforme o idioma para ser traduzido: ");
        scanf("%d",&idiomaSaida);
        idiomaSaida=idiomaSaida-1;

        printf("\nDigite a frase desejada:\n");
        fflush(stdin);
        gets(frase);
        p=frase;
        pega_palavra();
        printf("\n");
        do
        {
                linha=traducao(idiomaEntrada,idiomaSaida);
                if(linha!=-1)
                    printf("%s ",dic[linha]);
                else
                    printf("%s ",palavra);
                pega_palavra();
        }while(*palavra);
     printf("\nQuer traduzir outra frase?s/n\n");
     opcao=getche();

    }
    return 0;
}
