#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numeroIngresado;
    int numeroFactorial;
    numeroFactorial = 1;
    int x;

    printf("ingrese numero:");
    scanf("%d", &numeroIngresado);

    for(x = numeroIngresado;x>0;x--){

        numeroFactorial = numeroFactorial * x;

    }

    printf("el numero es: %d", numeroFactorial);
    system("pause");



    return 0;
}




//system("cls"); borra pantalla
//system("pause"); pausas y desp borras
