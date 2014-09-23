/*Questao 8 */
#include <stdio.h>
#include <stdlib.h>
//#define nvalores 10

int valor, vezes;

void funcao (int v[]) {
	int i;
	valor =0;
	vezes=0;
	for (i=0; i<9; i++) {
		if (v[i] > valor){
			valor = v[i];
		}
	}
	for (i=0; i<9; i++) {
		if (v[i] == valor) {
			vezes++;	
		}
	}
}

int main () {
	int v[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
	funcao (v);
	printf ("%d		", valor);
	printf ("%d", vezes);
	

	return 0;
	}


