#include <stdio.h>

int sumar(int a, int b, int *c){
    *c = *c + 1;
    return a + b;
}




int main(){
    int c = 0;
    int suma = sumar(5, 7, &c);
    suma = sumar(7, 7, &c);
    suma = sumar(9, 7, &c);
    printf("El número de sumas es: %d\n", c);
    printf("La suma es: %d\n", suma);
}