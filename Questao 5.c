/* Questao 5*/
#include <stdio.h>
#include <stdlib.h>

int troca (int* a, int* b) {
	*a = *a + *b;
	return 0;
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
