#include "tp0.h"
#include <stdio.h>

/* ******************************************************************
 *                     FUNCIONES A COMPLETAR
 * *****************************************************************/

/* swap() intercambia dos valores enteros.
 */
void swap (int* x, int* y) {
	int direc = *x;
	*x = *y;
	*y = direc;
}

/* maximo() busca el mayor elemento del arreglo y devuelve su posicion.
 * Si el vector es de largo 0, devuelve -1.
 */
int maximo(int vector[], int n) {
	
	if (n==0){
		return -1;
	}

	int pos = 0;
	int mayor = vector[pos];
	
	for (int i = 0; i < n; i++){
		if (mayor < vector[i]){
			mayor = vector[i];
			pos = i;
		}
	}
	
	return pos;
}

/* La función comparar recibe dos vectores y sus respectivas longitudes
 * y devuelve -1 si el primer vector es menor que el segundo; 0 si son
 * iguales; y 1 si el segundo es menor.
 *
 * Un vector es menor a otro cuando al compararlos elemento a elemento,
 * el primer elemento en el que difieren no existe o es menor.
 */
int comparar(int vector1[], int n1, int vector2[], int n2) {
	for(int i = 0; n1 != i || n2 != i; i++){
		if (n1 == i || (n2 != i && vector1[i] < vector2[i])){
			return -1;
		}
		else if (n2 == i || vector2[i] < vector1[i]){
			return 1;
		}
	}
	return 0;
}

/* selection_sort() ordena el arreglo recibido mediante el algoritmo de
 * selección.
 */
void seleccion(int vector[], int n) {
	int pos;
	for (int i = n; i>0; i--){
		pos = maximo(vector, i);
		swap(&vector[pos], &vector[i-1]);
	}
}
