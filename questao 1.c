/*Questao 01 */
#include <stdio.h>
#include <stdlib.h>

int troca (int* a, int* b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	return;
}

int main () {
	int x, y;
	
	printf ("digite um numero inteiro:");
	scanf ("%d", &x);
	printf ("digite o segundo numero inteiro:");
	scanf ("%d", &y);
	
	troca (&x, &y);
	
	printf ("%d   ", x); printf ("%d", y);	

	return 0;
	}


