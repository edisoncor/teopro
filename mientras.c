// Librería para el manejo de entrada y salida de datos
#include <stdio.h>

// Función principal
int main(){

    int i = 0; // Inicicialización
    while (i < 10){  // Condición 
        printf("El número i es: %d\n", i + 1); // Proceso
        i++; // Actualización
    }


    // Verificar si un número es primo con el for 
    int numero = 73; // Número a verificar 
    int es_primo = 1; // Bandera para verificar si es primo
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0){
            es_primo = 0; // No es primo
        }
    } 
    if (es_primo == 1){
        printf("El número %d es primo\n", numero);
    } else {
        printf("El número %d no es primo\n", numero);
    }

    // Verificar si un número es primo con el while
    es_primo = 1; // Bandera para verificar si es primo
   
    



    // Retorna OK
    return 0;
}