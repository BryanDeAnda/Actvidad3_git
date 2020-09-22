#include <stdio.h>

int main(){
    char nombre[100];
    unsigned int edad;

    printf("Hola Mundo!\n");
    printf("Nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %i", edad + 1);

    return 0;
}