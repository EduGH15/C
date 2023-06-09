#include <stdio.h>

/*Una vez que Chip y Dale por fin tienen un destino a donde ir, decidieron contarle a su amiga Gadget. Al escuchar los planes, se quiso sumar a sus vacaciones. Pero no le convencía el destino, por lo que tuvieron que hacer el sorteo nuevamente. Y para ser justos y que cada uno tenga la posibilidad de elegir, incorporaron como opción el mes de marzo y la vista de una laguna.

En esta oportunidad elige:
Chip: Si el mes es enero y la vista es laguna, si el mes es marzo y la vista es playa, o si el mes es febrero y la vista es montaña.
Dale: Si el mes es marzo y la vista es laguna, si el mes es febrero y la vista es playa, o si el mes es enero y la vista es montaña.
Gadget: Si el mes es febrero y la vista es laguna, si el mes es enero y la vista es playa, o si el mes es marzo y la vista es montaña.

-Imprimir por pantalla “Chip ”, “Dale” o “Gadget” según a quien le toque elegir esta vez.

-Convenciones:
Enero(E), febrero(F), marzo(X), playa(P), montaña (M), laguna (L).*/


const char ENERO = 'E';
const char FEBRERO = 'F';
const char MARZO = 'X';
const char PLAYA = 'P';
const char MONTANA = 'M';
const char LAGUNA = 'L';

int main(){
    char epoca;
    char paisaje;
    scanf(" %c", &epoca);
    scanf(" %c", &paisaje);
    
    if((epoca == ENERO && paisaje == LAGUNA) || (epoca == MARZO && paisaje == PLAYA) || (epoca == FEBRERO && paisaje == MONTANA)){
        printf("Chip\n");
    }else if((epoca == MARZO && paisaje == LAGUNA) || (epoca == FEBRERO && paisaje == PLAYA) || (epoca == ENERO && paisaje == MONTANA)){
        printf("Dale\n");
    }else if((epoca == FEBRERO && paisaje == LAGUNA) || (epoca == ENERO && paisaje == PLAYA) || (epoca == MARZO && paisaje == MONTANA)){
        printf("Gadget");
    }


	return 0;
}

/*Con un switch-------------


    switch(epoca) {
        case ENERO:
            if(paisaje == LAGUNA) {
                printf("Chip\n");
            } else if (paisaje == MONTANA) {
                printf("Dale\n");
            } else {                
                printf("Gadget\n");
            }
            break;
        case FEBRERO:
            if(paisaje == MONTANA) {
                printf("Chip\n");
            } else if (paisaje == PLAYA) {
                printf("Dale\n");
            } else {                
                printf("Gadget\n");
            }
            break;
        case MARZO:
            if(paisaje == PLAYA) {
                printf("Chip\n");
            } else if (paisaje == LAGUNA) {
                printf("Dale\n");
            } else {                
                printf("Gadget\n");
            }
            break;


*/