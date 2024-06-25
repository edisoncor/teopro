#include  <stdio.h>

int main(){
    // 2, 3, 4, 5, 6, 7, 8, 9
    // determinar la longitud de la arreglo
    // Determinar el tipo de dato
    int arreglo[8]; // arreglo de 8 elementos
    arreglo[0] = 2;
    arreglo[1] = 3;
    arreglo[2] = 4;
    arreglo[3] = 5;
    arreglo[4] = 6;
    arreglo[5] = 7;
    arreglo[6] = 8;
    arreglo[7] = 9;

    // imprimir el arreglo
    for(int i = 0; i < 8; i++){
        printf("El elemento %d es: %d\n", i, arreglo[i]);
    }

    // arreglos bidimensionales --> matrices
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // identificar la longitud de la matriz
    // identificar el tipo de dato

    int matriz[3][3]; // matriz de 3x3
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;


    // imprimir la matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("El elemento [%d][%d] es: %d\n", i, j, matriz[i][j]);
        }
    }

    // Imprimir la diagonal principal
    for (int i = 0; i < 3; i++){
        printf("El elemento [%d][%d] es: %d\n", i, i, matriz[i][i]);
    }

    // Matriz cuyas columas y las filas son diferentes
    // 1 2 3 4 5
    // 6 7 8 9 10

    int matriz2[4][5]; // matriz de 4x5
    matriz2[0][0] = 1;
    matriz2[0][1] = 2;
    matriz2[0][2] = 3;
    matriz2[0][3] = 4;
    matriz2[1][0] = 5;
    matriz2[1][1] = 6;
    matriz2[1][2] = 7;
    matriz2[1][3] = 8;
    matriz2[2][0] = 9;
    matriz2[2][1] = 10;
    matriz2[2][2] = 11;
    matriz2[2][3] = 12;
    matriz2[3][0] = 13;
    matriz2[3][1] = 14;
    matriz2[3][2] = 15;
    matriz2[3][3] = 16;

    // Imprimir la matriz
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    // Imprimir los 4 elementos de la esquina
    // Imprimir los elementos pares de la matriz
    // Imprimir los elementos impares de la matriz
    // Imprimir los elelemntos que no esten en las esquinas
    // Generar la matriz inversa
    // Generar la matriz transpuesta
    // Generar la matriz simetrica


    // 1  2  3  4 
    // 5  6  7  8
    // 9 10 11 12
    // 13 14 15 16

    //        l-1-i
    //m[0][3] 4-1-0 = 3
    //m[1][2] 4-1-1 = 2
    //m[2][1] 4-1-2 = 1
    //m[3][0] 4-1-3 = 0

    printf("La diagonal secundaria es:");
    for (int i = 0; i < 4; i++){
        printf("%d ",matriz2[i][4-1-i]);
    }

    int l = sizeof(matriz2);
    printf("\nEl tamaño de la matriz es %d\n", l);


    // recorrer el contorno de una matriz
    // m[0][0] m[0][1] m[0][2] m[0][3]
    // m[0][3] m[1][3] m[2][3] m[3][3]
    // m[3][3] m[3][2] m[3][1] m[3][0]
    // m[3][0] m[2][0] m[1][0] m[0][0]

    
    // Genera función o procedimiento para obtener
    // cuantas filas y cuantas columnas tienen una matriz

    return 0;

}