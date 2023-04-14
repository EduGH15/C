#include <stdio.h>
#include <stdbool.h>

#define MAX_PUNTOS 10
#define MAX_DIAS 10
const int DIAS_SEMANA = 7;

/*
1.- Crear un procedimiento que dado un vector, le pregunte al usuario cuantos puntos hizo ese dia y lo cargue en el vector. Luego, hacer una funcion que sume los puntos
de toda la semana y devuelva el resultado.
*/

void preguntar_puntos(int puntos_semanales[MAX_PUNTOS], int*tope_puntos){ //pasamos el tope por referencia para modificarlo
    for(int i = 0; i < DIAS_SEMANA; i++){
        printf("Cuantos puntos hiciste hoy?\n");
        scanf("%i", &(puntos_semanales[i]));
        (*tope_puntos)++; //Queremos modificar el tope, pasando de 0 a 1, luego a 2 y asi...
    }
}

int suma_puntos(int puntos_semanales[MAX_PUNTOS], int tope_puntos){
    int suma = 0;
    for(int i = 0; i < tope_puntos; i++){
        suma += puntos_semanales[i];
    }
    return suma;
}

/*
2.- A veces para que troy se confunde y anota mal los puntos. Una cantidad de puntos es válida si es multiplo de 2 y/o de 3. Hacer una función que reciba un vector vacio
y el vector de puntos ya cargado, y que llene el vector vacio con las posiciones del vector de puntos que tengan una cantidad de puntos inválida
*/

void cantidad_puntos_invalidos(int puntos_invalidos[MAX_DIAS], int* tope_invalidos, int puntos_semanales[MAX_PUNTOS], int tope_puntos){
    for(int i = 0; i < tope_puntos; i++){
        if(puntos_semanales[i] % 2 != 0 && puntos_semanales[i] % 3 != 0){
            puntos_invalidos[*tope_invalidos] = puntos_semanales[i];
            (*tope_invalidos)++;
        }
    }
}

void mostrar_lista(int puntos_invalidos[MAX_DIAS], int tope_invalidos){
    for(int i = 0; i < tope_invalidos; i++){
        printf("Los numeros invalidos son: %i\n", puntos_invalidos[i]);
    }
}

int main(){
    int puntos_semanales[MAX_PUNTOS];
    int tope_puntos = 0;
    preguntar_puntos(puntos_semanales, &tope_puntos); //Modificamos el vector vacio y el tope
    printf("La suma de los puntos de la semana es de: %i\n", suma_puntos(puntos_semanales, tope_puntos));

    int puntos_invalidos[MAX_DIAS];
    int tope_invalidos = 0;
    cantidad_puntos_invalidos(puntos_invalidos, &tope_invalidos, puntos_semanales, tope_puntos);
    mostrar_lista(puntos_invalidos, tope_invalidos);

    return 0;

}