/*Questao 6 */
#include <stdio.h>
#include <stdlib.h>

int raizes (float a, float b, float c, float* x1, float* x2) {
	
	double delta = b*b - 4*a*c;
	*x1 = (-b + sqrt (delta)) / 2*a;
	*x2 = (-b - sqrt (delta)) / 2*a;
	
	if (*x1 != *x2) {
		return 2;
	}
	else {
		return 1;
	}
}


int main () {
	float a; float b; float c; float x1; float x2; int rai;
	printf ("digite um numero:");
	scanf ("%f", &a);
	printf ("digite o segundo numero:");
	scanf ("%f", &b);
	printf ("digite o terceiro numero:");
	scanf ("%f", &c);
	
	rai = raizes (a, b, c, &x1, &x2);
	
	printf ("		CALCULO DE BHASKARA		\n");
	printf ("\n");
	printf ("numeros de raizes reais: %d		\n", rai);
	printf ("raiz 1: %f	", x1); printf ("raiz 2: %f", x2);

	return 0;
	}


