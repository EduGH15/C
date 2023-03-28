#include <stdio.h>
//Hacer un programa que, dado una cantidad de billetes y de que valor es, vaya imprimiendo la cantidad de billetes contada y el total. Por ejemplo, si se
//ingresa que se tiene 3 billetes de valor 20, se va a mostrar por pantalla
//Billete 1 total 20
//billete 2 total 40
//Billete 3 total 60

int main(){
    int cantidad_billetes, valor_billete, total;
    
    printf("Ingrese el valor del billete:\n");
    scanf("%i", &valor_billete);

    printf("Ingrese el número de billetes:\n");
    scanf("%i", &cantidad_billetes);

    total = cantidad_billetes * valor_billete;
    printf("Billete %i Total %i\n", cantidad_billetes, total);

    return 0;
}