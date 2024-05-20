/* printf
La función printf en C es una de las funciones 
más importantes y ampliamente utilizadas 
para la salida de datos. 
Aquí hay una explicación completa sobre su uso, 
sintaxis y algunas de sus capacidades avanzadas
*/

#include <stdio.h> //libreria de entrada y salida de datos

int main(){
    printf("Hola Mundo"); // Forma sencilla de presentar en pantalla el hola mundo
    printf("\n"); // Salto de linea
    printf("Hola Mundo\n"); // Forma sencilla de presentar en pantalla el hola mundo con salto de línea

    //Declaracion de variables
    int entero = 1; // Variable entera
    float flotante = 1.1; // Variable flotante
    char caracter = 'a'; // Variable caracter
    unsigned int enteroSinSigno = 1; // Variable entera sin signo
    double doble = 1.1; // Variable doble

    printf("Entero: %d\n", entero); // %d para enteros
    printf("Flotante: %f\n", flotante); // %f para float
    printf("Caracter: %c\n", caracter); // %c para char
    printf("Entero sin signo: %u\n", enteroSinSigno); // %u para enteros sin signo
    printf("Doble: %lf\n", doble); // %lf para double

    // varias varaibles en un solo printf
    printf("Entero: %d, Flotante: %f, Caracter: %c, Entero sin signo: %u, Doble: %lf\n", entero, flotante, caracter, enteroSinSigno, doble);

    float pi = 3.14159265;
    printf("Valor de pi: %f\n", pi); // %f para float
    printf("Valor de pi con 2 decimales: %.2f\n", pi); // %f para float con 2 decimales


    /*
    -: Alinea el valor a la izquierda dentro del ancho del campo.
    +: Fuerza a mostrar el signo + o - delante de los números.
    0: Rellena con ceros en lugar de espacios.
    (espacio): Añade un espacio antes de números positivos.
    */

    printf("Alinea el valor a la izquierda dentro del ancho del campo: %-d\n", entero); // Alinea el valor a la izquierda dentro del ancho del campo
    printf("Fuerza a mostrar el signo + o - delante de los números: %+d\n", entero); // Fuerza a mostrar el signo + o - delante de los números
    printf("Rellena con ceros en lugar de espacios: %05d\n", entero); // Rellena con ceros en lugar de espacios
    printf("Añade un espacio antes de números positivos: % d\n", entero); // Añade un espacio antes de números positivos






    return 0;

}