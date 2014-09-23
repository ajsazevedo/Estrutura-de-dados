/*Questao 14 */
#include <stdio.h>
#include <stdlib.h>
#define N 4


int main () {
	int vetor[N];
	int *ptr;
	int i;
	
	for (i=0; i<N; i++) {
		printf ("Insira um valor para o vetor:");
		scanf ("%d", &vetor[i]);
	}
	
	ptr = vetor;
	for (i=0; i<N; i++) {
		*ptr = *ptr + 1;
		printf ("%d, ", *ptr);
		ptr++;
	}
	
	return 0;
	}


