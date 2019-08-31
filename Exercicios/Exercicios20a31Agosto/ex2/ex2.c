#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operacao;

    printf("Selecione uma operacao:\n");
    printf("1 - Imposto\n");
    printf("2 - Novo salario\n");
    printf("3 - Classificacao \n");
    
    scanf("%d",&operacao);
	
    switch(operacao)
    {
        case 1:
        CalcularImposto();
        break;

        case 2:
        DefinirNovoSalario();
        break;

        case 3:
        DefinirClassificacao();
        break;

    }
    return 0;
}
int CalcularImposto()
{
    float Salario,Imposto = 0;

    printf("Digite o seu salario: \n");
    scanf("%f",&Salario);

    if(Salario<=1903.98)
    {
        printf("Isento de imposto de renda!");
    }
    else
    {
	    if(Salario>=1903.98 && Salario<= 2826.65)
	    {
	        Imposto = Salario * 0.075;
	    }
	    else if(Salario>=2826.66 && Salario<= 3751.05)
	    {
	        Imposto = Salario * 0.15;
	    }
	      else if(Salario>=3751.05 && Salario<= 4664.68)
	    {
	        Imposto = Salario * 0.225;
	    }
	    else if(Salario>4664.68)
	    {
	        Imposto = Salario * 0.275;
	    }
	    printf("O total de imposto a ser pago e \n:");
		printf("%f",Imposto);	
	}
    

}
int DefinirNovoSalario()
{
    float Salario, Aumento = 0;

    printf("Digite o valor de seu salario: \n");
    scanf("%f",&Salario);

    if(Salario<=1000)
    {
        Aumento = Salario + Salario * 0.40;
        
    }
    else if(Salario>=1000 && Salario<= 7500)
    {
        Aumento = Salario + Salario * 0.30;
    }
    else if(Salario>=7500 && Salario<=15000)
    {
        Aumento = Salario + Salario * 0.20;
    }
    else if(Salario>15000)
    {
        Aumento = Salario + Salario * 0.10;
    }
    printf("Seu novo salario e R$ %0.2f :  ",Aumento);
    
}
int DefinirClassificacao()
{
    float Salario = 0;

    printf("Digite o seu salario:\n");
    scanf("%f",&Salario);

    if(Salario<=7000)
    {
        printf("Mal remunerado \n");
    }
    else{
        printf("Bem remunerado\n");
    }
}

