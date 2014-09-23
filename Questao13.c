/*Questao 13 */
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float numeroReal;
	int numeroInteiro;
	char caracter;
	float *ptrReal;
	int *ptrInt;
	char *ptrChar;
	
	printf ("digite um numero real:");
	scanf ("%f", &numeroReal);
	printf ("digite um numero inteiro:");
	scanf ("%d", &numeroInteiro);
	printf ("digite um carater:");
	scanf ("%c", &caracter);
	
	*ptrInt = &numeroInteiro;
	*ptrReal = &numeroReal;
	*ptrChar = &caracter;
	
	printf ("%f	%d	%c", numeroReal, numeroInteiro, caracter);
	*ptrInt += 2;
	*ptrReal += 3;
	*ptrChar = "$";
	printf ("%f	%d	%c", numeroReal, numeroInteiro, caracter);	


	return 0;
	}
