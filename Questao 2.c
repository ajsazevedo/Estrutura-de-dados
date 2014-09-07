/*Questao 02 */
#include <stdio.h>
#include <stdlib.h>

int compara (int* a, int* b) {
	if (*a < *b) {
		int aux;
		aux = *a;
		*a = *b;
		*b = aux;
	}
	return;
}
int main () {
	int x, y;
	printf ("digite um numero inteiro...\n");
	scanf ("%d \n", &x);
	printf ("digite o segundo numero inteiro...\n");
	scanf ("%d \n", &y);
	compara (&x, &y);
	printf ("%d   ", x); printf ("%d", y);	

	return 0;
	}

