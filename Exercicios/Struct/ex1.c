#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    typedef struct	Horario {
        char hora[2];
        char minutos[2];
        char segundos[2];
    }	Horario;

    typedef struct	Data {
        char dia[2];
        char mes[2];
        char ano[4];
    }	Data;

    typedef struct	Compromisso {
        Data data[1];
        Horario hora[1];
        char descricao[500];
    }	Compromisso;
    
    return 0;
}
