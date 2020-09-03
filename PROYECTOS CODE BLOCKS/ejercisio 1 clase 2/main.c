#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int legajo;
    char sexo;
    int cantidadPersonas;
    int sumaEdades;
    int cantidadMujeres;
    int cantidadHombres;
    int edadMaxima;
    int edadMinima;
    float promedioEdades;


    cantidadMujeres =0;
    cantidadHombres =0;
    sumaEdades=0;

    for(cantidadPersonas=0;cantidadPersonas<5;cantidadPersonas++){
        printf("ingrese edad: ");

        scanf("%d", &edad);

       do{
        printf("ingrese sexo: ");
        fflush(stdin); // solo cuando es char
        scanf("%c", &sexo);

       }while(sexo != 'f' && sexo != 'm'); // mejor usar un while
       // buscar toUpper, toLower

        printf("ingrese legajo: ");

        scanf("%d", &legajo);

        if(sexo =='f'){
        cantidadMujeres++;
        }else{
        cantidadHombres++;
        }

        sumaEdades = sumaEdades + edad;

        if(cantidadPersonas == 0){
            edadMaxima = edad;
            edadMinima = edad;
        }else{
        if(edad > edadMaxima){
            edadMaxima = edad;
        }else{
        if(edad < edadMinima){
            edadMinima = edad;
        }
        }
        }

        /* otra forma de hacer el max y min mas acotado

        if(cantidadPersonas == 0 || edad > edadMaxima){
            edadMaxima = edad;
        }
        if(cantidadPersonas == 0 || edad < edadMinima){
            edadMinima = edad;
        }
        */







    }

    promedioEdades = (float) sumaEdades / cantidadPersonas;

    printf("\n la cantidad de mujeres es: %d ", cantidadMujeres);
    printf("\n la cantidad de hombres es: %d", cantidadHombres);
    printf("\n la edad maxima es: %d", edadMaxima);
    printf("\n la edad minima es: %d", edadMinima);
    printf("\n el promedio es: %f", promedioEdades);
    return 0;
}
