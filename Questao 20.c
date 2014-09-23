/*Questao 20 */
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
		if (vetor[i]%2 == 0)
		printf ("%d, ", &vetor[i]);

	}
	return 0;
	}

