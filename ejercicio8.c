#include <stdio.h>

/*En la fábrica Monster S.A. los monstruos se dedican a viajar al mundo de los humanos para asustar a los niños y así obtener la energía que abastece el mundo de los monstruos.

Para ello es importante que cada empleado lleve un registro de la cantidad de niños asustados durante sus jornadas. Sin embargo, hay un monstruo llamado Mike Wazowski que siempre olvida hacerlo.
Cansada de esta situación, la secretaria Roz decidió contar la cantidad de veces que Mike no hizo su papeleo.

Imprimir por pantalla “Wazowski no ordenaste tu papeleo anoche”, sabiendo la cantidad de veces que contó Roz.
(https://youtu.be/RmuKNpavYbs?t=16).

    Si se recibe 4, debe imprimirse:
    Wazowski no ordenaste tu papeleo anoche.
    Wazowski no ordenaste tu papeleo anoche.
    Wazowski no ordenaste tu papeleo anoche.
    Wazowski no ordenaste tu papeleo anoche.
*/

int main(){
	int veces_contadas;
	scanf("%i", &veces_contadas);
	// Aqui va tu codigo donde deberias usar un while..
	int contador = 0;
	while(contador < veces_contadas){
		printf("Wazowski no ordenaste tu papeleo anoche.\n");
		contador++;
	}

	return 0;
}