#include <stdio.h> //libreria de entrada y salida de datos


int main(){
    //Declaracion de variables
    int n1; // Variable entera
    n1 = 3; // Inicialización

    int n2 = 5; // Declaración e inicialización
    float f1 = 0.1;
    float f2;
    f2 = 0.2;
    char c1 = 'a';
    char c2 = '3';

    printf("n1 = %d", n1);
    printf("\n");
    printf("n2 = %d \n", n2);// %d para enteros
    printf("f1 = %f \n", f1); // %f para float
    printf("f2 = %f \n", f2); // %f para float
    printf("c1 = %c \n", c1); // %c para char

    float f3 = f1 + f2;

    printf("f3 = %f \n", f3); 
    printf("c2 = %d \n", c2);
    printf("%c \n", 64);

    return 0;
}