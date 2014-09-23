/*Questao 21*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verString (char *string1[], char *string2[]) {
	
	int i;
	char *final1, *final2;
	final1 = &string1[0];
	final2 = &string2[0];
	
	
	for (i=0; *final1 =="\0"||*final2 =="\0"; i++) {
		if (*final1[i] == *final2[i]){
			k++;
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
