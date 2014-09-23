/*Questao 19 */
#include <stdio.h>
#include <stdlib.h>
#define N 5


int main () {
	int i;
	int vetor[N];
	for (i=0; i<N; i++) {
		printf ("Insira um valor para o vetor:");
		scanf ("%d", &vetor[i]);
	}
	for (i=0; i<N; i++) {
		printf ("%d, ", 2*vetor[i]);

	}
	return 0;
	}


