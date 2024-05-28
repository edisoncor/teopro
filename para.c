#include <stdio.h>

int main() {

    // PARA: Estructura de control de flujo
    for (int i = 0; i < 10; i++) {
        printf("El número i es: %d\n", i + 1);

        // PARA(anidado): Estructura de control de flujo
        for (int j = 0; j < 10; j++) {
            printf("El número  j es: %d\n", j + 1);
        }
    }

    // PARA: Estructura de control de flujo
    // Presentamos un patrón de asteriscos
    for (int i = 0; i < 10; i++) {
        // PARA: Estructura de control de flujo anidada
        for(int j = 0; j < i; j++) {
            // IMPRIMIR: Imprimimos un asterisco de acuerdo al valor de i
            printf("*");
        }
        // IMPRIMIR: salto de línea
        printf("\n");
    }

    // Multiplaicación de dos números
    // Por sumas sucesivas
    int n1 = 7;
    int n2 = 5;
    // ENTRADA: Solicitamos al usuario dos números enteros
    // printf("Ingrese dos números enteros: ");
    // scanf("%d %d", &n1, &n2);
    // PROCESO: Multiplicación de dos números
    int multiplicacion = 0;
    for(int i = 0; i < n2; i++) {
        // SUMA: Sumamos n1 n2 veces
        multiplicacion += n1;
    }
    printf("La multiplicación de %d por %d es: %d\n", n1, n2, multiplicacion);


    // División de dos números
    // Por restas sucesivas con for
    // ENTRADA: Solicitamos al usuario dos números enteros
    // printf("Ingrese dos números enteros: ");
    // scanf("%d %d", &n1, &n2);
    int dividendo = 15;
    int divisor = 3;
    // PROCESO: División de dos números
    int cociente = 0;
    for (int i = dividendo; i >= divisor; i -= divisor) {
        // RESTA: Restamos i - divisor
        cociente++;
    }
    printf("La división de %d entre %d es: %d\n", dividendo, divisor, cociente);

    // La suma de los primeros 100 números con for
    int suma = 0;
    for (int i = 1; i <= 100; i++) {
        // SUMA: Sumamos i a la variable suma
        suma += i;
    }
    printf("La suma de los primeros 100 números es: %d\n", suma);


    // Presentar la tabla de multiplicar del 12 con for
    int tabla = 12;
    for (int i = 1; i <= 10; i++) {
        // MULTIPLICACIÓN: tabla * i
        printf("%d x %d = %d\n", tabla, i, tabla * i);
    }


    // Presentar el factorial de un número con for
    int numero = 5; // 5! = 5 * 4 * 3 * 2 * 1 = 120
    int factorial = 1;
    for  (int i = numero; i > 0; i--) {
        // MULTIPLICACIÓN: factorial * i
        factorial *= i;
    }


    // Que presente la suma de los digitos de un número
    // 12567 -> 1 + 2 + 5 + 6 + 7 = 21
    int numero2 = 12567;

    // El inverso de un número
    // 12567 -> 76521


    // Potencia mediante sumas sucesivas
    // 2^3 = 2 * 2 * 2 = 8 Implmentar para la multiplicacion por sumas sucesivas


    // Radicación mediante restas sucesivas
    // 27^(1/3) = 3 Implmentar para la radicación por restas sucesivas


    // Que presente la n elelmentos de la serie de Fibonacci
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...



    return 0;
}