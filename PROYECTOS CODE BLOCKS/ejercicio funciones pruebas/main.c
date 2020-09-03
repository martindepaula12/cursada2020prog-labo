#include <stdio.h>
#include <stdlib.h>

void mostarEdad(int edadParametro);

int sumarNumeros(int numeroUno, int numeroDos);
void mostrarDatoEnteroSuma(int datoParametro);
void calcularYMostrarSuma(int numeroUno, int numeroDos);
int restarNumeros(int numeroUno, int NumeroDos);
void mostrarDatoResta (int datoParametro);
void calcularYMostrarResta(int numeroUno, int numeroDos);
int dividirNumeros(int numeroUno, int numeroDos);
void mostrarDivision(int datoDivision);
void calcularYMostrarDivision(int numeroUno, int numeroDos);
int multiplicarNumeros(int numeroUno, int numeroDos);
void mostrarMultiplicacion(datoMultiplicacion);
void calcularYMostrarMultiplicacion(int numeroUno, int numeroDos);

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

    calcularYMostrarSuma(numeroUno, numeroDos);
    calcularYMostrarResta(numeroUno, numeroDos);
    calcularYMostrarDivision(numeroUno, numeroDos);
    //calcularYmostrarMultiplicacion(numeroUno, numeroDos);




}

int sumarNumeros(numeroUno, numeroDos){
int resultadoSuma;
resultadoSuma = numeroUno + numeroDos;
return resultadoSuma;

}

void mostrarDatoEnteroSuma( datoParametro){
printf("la suma es: %d ", datoParametro);
}

void calcularYMostrarSuma( numeroUno,numeroDos){
int resultadoSuma;
resultadoSuma = sumarNumeros(numeroUno, numeroDos);
mostrarDatoEnteroSuma(resultadoSuma);

}

int restarNumeros(numeroUno, numeroDos){
int resultadoResta;
resultadoResta = numeroUno - numeroDos;
return resultadoResta;
}

void mostrarDatoResta(datoParametro){
printf("la resta es: %d", datoParametro);
}

void calcularYMostrarResta(numeroUno, numeroDos){
int resultado;
resultado = restarNumeros(numeroUno, numeroDos);
mostrarDatoResta(resultado);
}

int dividirNumeros(numeroUno, numeroDos){
float resultadoDivision;
resultadoDivision = (float) numeroUno / numeroDos;
return resultadoDivision;

}
void mostrarDivision(datoDivision){
printf("\n la division es: %d", datoDivision);
}

void calcularYMostrarDivision(numeroUno, numeroDos){
float resultadoDivision;
resultadoDivision = dividirNumeros(numeroUno, numeroDos);
mostrarDivision(resultadoDivision);
}




