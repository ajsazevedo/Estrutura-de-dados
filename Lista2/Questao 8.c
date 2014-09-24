/*Questao 8*/

/*Questao 4*/
/* Questao 12*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

void funcaoMaxMin (int v[N], int *maxima, int *minima) {
	
	int i;
	
	for (i=0; i<N; i++) {
		if (v[i] > *maxima){
			*maxima = v[i];
		}
	}
	for (i=0; i<N; i++) {
		if (v[i] < *minima) {
			*minima = v[i];	
		}
	}
}

int main () {
	int vetor[N];
	int j;
	int max=0;
	int min;
	
	for (j=0; j<N; j++) {
		printf ("Insira um valor para o vetor:");
		scanf ("%d", &vetor[j]);
	}
	
	funcaoMaxMin (vetor, &max, &min);
	printf ("%d		", max);
	printf ("%d", min);
	

	return 0;
	}
