/*Questao 10 */
#include <stdio.h>
#include <stdlib.h>

int DobraSoma (int *x, int *y) {
	*x = 2*(*x);
	*y = 2*(*y);
	return *x + *y;
}




int main () {
	int x, y, z;
	
	printf ("digite um numero inteiro:");
	scanf ("%d", &x);
	printf ("digite o segundo numero inteiro:");
	scanf ("%d", &y);
	
	z = DobraSoma (&x, &y);
	
	printf ("%d  + %d	= %d ", x, y, z);	

	return 0;
	}


