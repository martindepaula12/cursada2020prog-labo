#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letraIngresada;

    int contador;

    for(contador = 0;contador <5;contador++){

        printf(" ingrese letra: ");
        fflush(stdin); // limpia el buffer... __fpurge(stdin) para gbd
        scanf("%c", &letraIngresada);



        }

    return 0;


    }

