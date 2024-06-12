#include <stdio.h>

// Funcion sumar dos números
int sumar(int numero1, int numero2){
    return numero1 + numero2;
}

int sumar2(){
    return 6.5 + 4;
}

// Procedimiento para imprimir un mensaje
void imprimirMensaje(){
    printf("**************\n");
    printf("* Hola mundo *\n");
    printf("**************\n");
    int h = sumar(5, 7);
}

int main(){
    int suma = sumar(5, 7);
    int suma2 = sumar(10, 20);
    for (int i = 0; i < 10; i++){
        sumar(i, i + 1);
    }
    imprimirMensaje();
}