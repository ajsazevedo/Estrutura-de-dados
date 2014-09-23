/*Questao 15*/
#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, y;
	int *a, *b;
	
	a = &x;
	b = &y;
	
	if (a>b) {
		printf ("%d", a);
	} else {
		printf ("%d", b);
	}
	
	return 0;
	}


