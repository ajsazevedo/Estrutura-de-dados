/* 4) Escreva uma fun��o mm que receba um vetor inteiro v[0..n�1] e os endere�os
de duas vari�veis inteiras, digamos min e max, e deposite nessas vari�veis o
valor de um elemento m�nimo e o valor de um elemento m�ximo do vetor.
Escreva tamb�m uma fun��o main que use a fun��o mm. */




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

