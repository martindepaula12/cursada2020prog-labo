#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


//1- prototipo - declaracion - firma


int main()
{
    //int sumaResuelta =  sumarNumeros(5,5);
    //mostrarDatoEntero(sumaResuelta);

    int numeroUno;
    int numeroDos;

    printf("\n ingrese numero uno:");
    scanf("%d", &numeroUno);

    printf("\n ingrese numero dos:");
    scanf("%d", &numeroDos);

    //3- uso llamada o invocacion de la funcion
    calcularYMostrarSuma(numeroUno, numeroDos);
    calcularYMostrarResta(numeroUno, numeroDos); // parametros actuales
    calcularYMostrarDivision(numeroUno, numeroDos);
    calcularYMostrarMultiplicacion(numeroUno, numeroDos);




return 0;


}



//2- implementacion o desarollo de la funcion










