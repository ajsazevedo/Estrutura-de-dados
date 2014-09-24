/* Questao 10*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int contador[] (char string[], char letra, int* cont) {
	int i, j;
	j=0;
	*cont=0;
	
	for (i=0; i<N; i++) {
		if (string [i] == letra){
			contador[j] = i;
			*cont++;
			j++;
			
		}
	}
	
	return contador[];

}

int main () {
	char str[N];
	char l;
	int c;
	int vetor[N];
	
	vetor = contador (str[], l, &c);
	printf ("%d		", vetor);
	printf ("%d", c);
	

	return 0;
	}
