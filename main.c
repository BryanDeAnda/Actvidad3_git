#include <stdio.h>

int main(){
    char nombre[100];

    printf("Hola Mundo!\n");
    printf("Nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);

    return 0;
}