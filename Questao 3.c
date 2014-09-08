/*Questao 03 */
#include <stdio.h>
#include <stdlib.h>

/*int troca (int a, int b) {
	int aux;
	aux = a;
	a = b;
	b = aux;
	return;
}*/

int ordena (int vetor[]) {
	if ((vetor[0] == vetor[1]) && (vetor[0] == vetor[2])) {
		return 1;
	}
	int i=0, j=0;
	for (i=0; i<2; i++) {
		for (j=0; j<2; j++) {
			if (vetor[i] > vetor [j]) {
				int aux;
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	return 0;
}

int main () {
	int numeros[2];
	
	printf ("digite o primeiro numero inteiro...\n");
	scanf ("%d \n", &numeros[0]);
	printf ("digite o segundo numero inteiro...\n");
	scanf ("%d \n", &numeros[1]);
	printf ("digite o terceiro numero inteiro...\n");
	scanf ("%d \n", &numeros[2]);
	ordena (numeros);
	int i = 0;
	for (i=0; i<2; i++) {
		printf ("%d\n", numeros[i]);
	}
	return 0;
}
