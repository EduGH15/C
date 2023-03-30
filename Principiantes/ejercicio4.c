#include <stdio.h>
//Crear un programa que dado un caracter que representa cifrado del cuaderno de Milo imprima por pantalla que camino  deben tomar
//I(izquierda): por la izquierda
//D(Derecha): por la derecha
//Si recibe otra letra, es porque encontraron atlantis y debe imprimirse: Atlantis!

const char DERECHA = 'D';
const char IZQUIERDA = 'I';

int main(){
    char texto = ' ';
    printf("Ingrese el texto cifrado del cuaderno de Milo: \n");
    scanf(" %c", &texto);

    if(texto == DERECHA){
        printf("Por la derecha!\n");
    }else if(texto == IZQUIERDA){
        printf("Por la izquierda!\n");
    }else{
        printf("Atlantis!\n");
    }
}