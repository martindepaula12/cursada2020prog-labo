#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int primerOperando;
    int segundoOperando;
    char operacionARealizar;

    do{
        printf("1- ingresar primer operando: \n 2- ingresar segundo operando: \n 3-calcular operaciones: \n a- calcular la suma \n b- calcular la resta \n c- calcular la division \n d- calcular la multiplicacion \n e- calcular el factorial \n4-informar resultados: \n 5-Salir.");
        scanf("%d", &opcion);


        switch(opcion){
        case 1:
            printf("ingresar primer operando: \n");
            scanf("%d", &primerOperando);
        break;
        case 2:
            printf("ingresar segundo operando: \n");
            scanf("%d", &segundoOperando);
            break;
        case 3:
            printf("que operacion desea realizar:");
            scanf("%c", &operacionARealizar);
            break;





        }







    }while(opcion != 5);

    printf("primer op: %d \n",primerOperando);
    printf("segun op: %d \n", segundoOperando);
    printf("op a rea: %c",  operacionARealizar);


    return 0;
}
