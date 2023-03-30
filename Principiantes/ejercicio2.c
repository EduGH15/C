#include <stdio.h>

//Cada vez que el sr bigote se toca la cabeza, se le caen 78 pelos. 
//Crear un programa que, dadas las veces que el señor bigotes se tocó la cabeza, imprima por pantalla cuantos pelos perdió.
const int PELOS = 78;

int main(){
    int nro_veces = 0;
    int total_pelos = 0;
    
    printf("Escriba cuantas veces se tocó la cabeza el Sr Bigotes:");
    scanf("%i", &nro_veces);

    total_pelos = PELOS * nro_veces;
    printf("El nro de pelos que perdió el Sr Bigotes es de: %i\n", total_pelos);

}