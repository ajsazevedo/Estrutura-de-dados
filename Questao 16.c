/*Questao 16 */
#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, y;
	int *a, *b;
	
	a = &x;
	b = &y;
	printf ("digite um numero inteiro:");
	scanf ("%d", &x);
	printf ("digite o segundo numero inteiro:");
	scanf ("%d", &y);
	
	if (a>b) {
		printf ("%d", *a);
	} else {
		printf ("%d", *b);
	}
	
	return 0;
	}


