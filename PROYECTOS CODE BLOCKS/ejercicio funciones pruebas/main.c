#include <stdio.h>
#include <stdlib.h>

void mostarEdad(int edadParametro);

int sumarNumeros(int numeroUno, int numeroDos);
void mostrarDatoEnteroSuma(int datoParametro);
void calcularYMostrarSuma(int numeroUno, int numeroDos);
int restarNumeros(int numeroUno, int NumeroDos);
void mostrarDatoResta (int datoParametro);
void calcularYMostrarResta(int numeroUno, int numeroDos);
float dividirNumeros(int numeroUno, int numeroDos);
void mostrarDivision(float datoDivision);
void calcularYMostrarDivision(int numeroUno, int numeroDos);
int multiplicarNumeros(int numeroUno, int numeroDos);
void mostrarMultiplicacion(int datoMultiplicacion);
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
    calcularYMostrarMultiplicacion(numeroUno, numeroDos);




return 0;


}





int sumarNumeros(int numeroUno, int numeroDos){
int resultadoSuma;
resultadoSuma = numeroUno + numeroDos;
return resultadoSuma;

}

void mostrarDatoEnteroSuma( int datoParametro){
printf("la suma es: %d ", datoParametro);
}

void calcularYMostrarSuma( int numeroUno,int numeroDos){
int resultadoSuma;
resultadoSuma = sumarNumeros(numeroUno, numeroDos);
mostrarDatoEnteroSuma(resultadoSuma);

}

int restarNumeros(int numeroUno,int numeroDos){
int resultadoResta;
resultadoResta = numeroUno - numeroDos;
return resultadoResta;
}

void mostrarDatoResta(int datoParametro){
printf("la resta es: %d", datoParametro);
}

void calcularYMostrarResta(int numeroUno,int  numeroDos){
int resultado;
resultado = restarNumeros(numeroUno, numeroDos);
mostrarDatoResta(resultado);
}

float dividirNumeros(int numeroUno,int numeroDos){
float resultadoDivision;
resultadoDivision = (float) numeroUno / numeroDos;
return resultadoDivision;

}
void mostrarDivision(float datoDivision){
printf("\n la division es: %f", datoDivision);
}

void calcularYMostrarDivision(int numeroUno, int numeroDos){
float resultadoDivision;
resultadoDivision = dividirNumeros(numeroUno, numeroDos);
mostrarDivision(resultadoDivision);
}

int multiplicarNumeros(int numeroUno,int numeroDos){
int resultado;
resultado = numeroUno * numeroDos;
return resultado;
}

void mostrarMultiplicacion(int datoMultiplicacion){
printf("\n la multiplicacion es: %d", datoMultiplicacion);
}

void calcularYMostrarMultiplicacion(int numeroUno,int  numeroDos){
int resultado;
resultado = multiplicarNumeros(numeroUno, numeroDos);
mostrarMultiplicacion(resultado);
}








