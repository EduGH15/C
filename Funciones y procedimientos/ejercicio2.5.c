#include <stdio.h>
#define MAX_FILA 10
#define MAX_COLUMNA 10

/*
Escribir una función que reciba por parámetro una dimensión n, e imprima la
matriz identidad correspondiente a esa dimensión.
*/

void inicializar_matriz(int dimension, int matriz_identidad[MAX_FILA][MAX_COLUMNA]){
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            if(i == j){
                matriz_identidad[i][j] = 1;
            }else{
                matriz_identidad[i][j] = 0;
            }
        }
    }
}

void imprimir_matriz(int dimension, int matriz_identidad[MAX_FILA][MAX_COLUMNA]){
    for(int i = 0; i < dimension; i++){
        for(int j = 0; j < dimension; j++){
            printf("%i ", matriz_identidad[i][j]);
        }
        printf("\n");    
    }
}

int main(){
    int matriz_identidad[MAX_FILA][MAX_COLUMNA];
    int dimension;
    
    printf("Ingrese la dimensión:\n");
    scanf("%i", &dimension);
    inicializar_matriz(dimension, matriz_identidad);
    imprimir_matriz(dimension, matriz_identidad);

    return 0;
}