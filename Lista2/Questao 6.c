/* Questao 6*/
#include <stdio.h>
#include <stdlib.h>


void troca (float *a, float *b) {

	float aux;

	aux = *a;
	*a = *b;
	*b = aux;
	
} 

int main () {
	
	float x, y;
	
	printf ("digite um numero inteiro:");
	scanf ("%f", &x);
	printf ("digite o segundo numero inteiro:");
	scanf ("%f", &y);
	
	troca (&x, &y);
	
	printf ("%f   ", x); printf ("%f", y);	

	return 0;
	}

