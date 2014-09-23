/*Questao 11 */
#include <stdio.h>
#include <stdlib.h>
#define N 10

int valor, k;

int funcaoMaior (int v[k]) {
	int j;
	valor =0;
	for (j=0; j<k; j++) {
		if (v[j] > valor){
			valor = v[j];
		}
	}
	return valor;
}

int main () {
	int i;
	int vetor[N];
	int maior;
	
	for (i=0; i<N; i++) {
		printf ("Insira um valor para o vetor:");
		scanf ("%d", &vetor[i]);
	}
	
	printf ("Insira o numero de elementos a serem impressos por linha:");
	scanf ("%d", &k);
	
	maior = funcaoMaior (vetor);
	
	for (i=0; i<k; i++) {
		printf ("%d, ", vetor[i]);

	}
		printf ("o maior elemento eh %d", maior);
	
	return 0;
}



