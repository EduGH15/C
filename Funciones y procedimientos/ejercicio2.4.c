#include <stdio.h>

/*
Escribir dos funciones que permitan calcular:
a) La duración en segundos de un intervalo dado en horas, minutos y segundos.
b) La duración en horas, minutos y segundos de un intervalo dado en segundos.
*/

typedef struct tiempo{
    int horas;
    int minutos;
    int segundos;
}tiempo_t;


int calcular_segundos(int horas, int minutos, int segundos){
    return (horas * 3600) + (minutos * 60) + segundos;
}

tiempo_t calcular_tiempo(int segundos){

    tiempo_t nuevo_tiempo;
    nuevo_tiempo.horas = segundos / 3600;
    nuevo_tiempo.minutos = (int)(((float) (segundos / 3600) - (float) (nuevo_tiempo.horas)) * 60);
    nuevo_tiempo.segundos = 0;
    return nuevo_tiempo;
}

int main(){
    tiempo_t tiempo = calcular_tiempo(20000);
    printf("El tiempo en horas es: %i\n", tiempo.horas);
    printf("El tiempo en minutos es: %i\n", tiempo.minutos);
    printf("El tiempo en segundos es: %i\n", tiempo.segundos);
    return 0;
}