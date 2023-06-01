#include <stdio.h>
#define MAX_NUMEROS 1000

/*
d) Escribir una función que dado un número devuelva el primer número múltiplo de 10
inferior a él. Por ejemplo, para 153 debe devolver 150.
*/

int calcular_ultimo_multiplo(int numero, int numeros[MAX_NUMEROS], int* tope){
    for(int i = 10; i <= numero; i += 10){
        numeros[*tope] = i;
        (*tope)++;
    }
    return numeros[*tope - 1];
}

int main(){
    int numero_1;
    int numeros[MAX_NUMEROS];
    int tope = 0;
    printf("Ingrese un número:\n");
    scanf("%i", &numero_1);
    printf("El ultimo multiplo de 10 es: %i\n", calcular_ultimo_multiplo(numero_1, numeros, &tope));
    return 0;
}