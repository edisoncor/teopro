#include <stdio.h> //libreria de entrada y salida de datos

int main(){
    int a = 10;
    int b = 10;
    // max tiene el valor mayor entre a y b usando if
    int max = 0;
    if (a > b){
        max = a;
    } else {
        max = b;
    }
    // max tiene el valor mayor entre a y b usando operador ternario
    max = (a > b) ? a : b;
    // menor tiene el valor menor entre a y b usando operador ternario
    int menor = (a < b) ? a : b;
    printf("max = %d \n", max);

    printf("menor = %d \n", menor);

    // Condicional simple
    if (a == b){
        printf("a es igual a b \n"); // verdadero
    };

    // Condicional doble
    if (a != b){
        printf("a es diferente de b \n"); // verdadero
    } else {
        printf("a es igual a b \n"); // falso
    }

    // Condicional múltiple
    if (a == b){
        printf("Los números son iguales"); // verdadero
    } else if (a > b){  // falso
        printf("a es mayor que b");
    } else {
        printf("b es mayor que a");
    }


    max = (a > b) ? a : b;
    printf("El mayor es %d \n", (a > b) ? a : b);

    int n1 = 3;
    int n2 = 5;
    int n3 = 1;
    
    if (n1 > n2){           // (n1 > n2)    --------  (n1 > n2) ?  (n1 > n3) ? n1 : n3 : (n2 > n3) ? n2 : n3
        if (n1 > n3){           // (n1 > n3)  ------  (n1 > n3) ? n1 : n3
            max = n1;               // n1
        } else {
            max = n3;               // n3
        }
    } else {
        if (n2 > n3){           // (n2 > n3)  ------  (n2 > n3) ? n2 : n3
            max = n2;               // n2
        } else {
            max = n3;               // n3
        }
    }

    printf("El número mayor es %d \n", (n1 > n2) ?  (n1 > n3) ? n1 : n3 : (n2 > n3) ? n2 : n3);

    return 0;
}


