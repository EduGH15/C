#include <stdio.h>

//crear un programa que de acuerdo a la cantidad de cachorros que querrán cenar, imprima por pantalla cuantas bolsas de alimento
//balanceado Nanny tendrá que comprar teniendo en cuenta que cada bolsa rinde para 10 cachorros.

const int CAPACIDAD_BOLSA = 10;

int main(){
    int cachorros = 0;
    int total_de_bolsas = 0;

    printf("Ingrese la cantidad de cachorros:\n");
    scanf("%i", &cachorros);

    total_de_bolsas = cachorros / CAPACIDAD_BOLSA;
    printf("El numero de bolsas correspondiente a la cantidad de cachorros es de: %i\n", total_de_bolsas);
    return 0;
}