/*Questao 17 */
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main () {
	int i;
	float vetor[N] = {12.1, 13.2, 14.6, 17.2, 18.9, 20.2, 25.3, 22.4, 900.2, 602.3};
	for (i=0; i<N; i++) {
		printf ("%d, ", &vetor[i]);
	}
	return 0;
	}


