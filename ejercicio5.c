#include <stdio.h>
//Crear un programa que a partir de los depredaroes capturados por cada uno, imprima por pantalla "Te capturaremos 626!!!" si entre los dos lograron llegar a 10 o 
//"Maldito hamster incompetente" en caso contrario.

int main(){
    int cazador1;   
    int cazador2;
    int total;

    printf("Ingrese la cantidad de depredadores capturados por el cazador 1:\n");
    scanf("%i", &cazador1);
    printf("Ingrese la cantidad de depredadores capturados por el cazador 2:\n");
    scanf("%i", &cazador2);

    total = cazador1 + cazador2;

    if(total >= 10){
        printf("Te capturaremos 626!!!\n");
    }else{
        printf("Maldito hamster incompetente\n");
    }
    
    return 0;
}