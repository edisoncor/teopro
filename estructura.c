#include <stdio.h>

struct Persona{ // CamelCase: La primera letra de cada palabra es mayúscula 
    char nombre[50];
    int edad;
    char genero;
};

struct Coordenada{
    float latitud;
    float longitud;
};

// para funciones y procedimientos utilizar lowerCamelCase

int main(){
    struct Persona persona1;
    struct Coordenada c;
    int i;
    c.latitud = 19.4326;
    c.longitud = -99.1332;
    printf("La coordenada es: %f\n", c.latitud);
    

}