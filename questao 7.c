/*Questao 7*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int frac (float num, int* inteiro, float* fracao) {
	
	*inteiro = floor(num);
	*fracao = num - *inteiro;
	return 0;
	
}
int main () {
	
	float numero;
	int inte;
	float fracc;
	
	printf ("digite um numero real:");
	scanf ("%f", &numero);
	frac (numero, &inte, &fracc);
	printf ("a parte inteira do numero eh: %d \n", inte);
	printf ("a parte decimal do numero eh: %f \n", fracc);
	

	return 0;
	}


