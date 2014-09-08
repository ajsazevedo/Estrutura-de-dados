/*Questao 4 */
#include <stdio.h>
#include <stdlib.h>
int x, y, z, w;

int le_notas () {
	printf ("digite um numero inteiro:");
	scanf ("%d", &x);
	printf ("digite o segundo numero inteiro:");
	scanf ("%d", &y);
	return 0;
}

int calc_media (int x, int y) {
	z = (x+y)/2;
	w = (x+ (y*2))/2;
	return 0;
}

int exibe_dados (int x, int y, int z, int w) {
	printf ("		CALCULO DE MEDIA		\n");
	printf ("\n");
	printf ("Nota 1: %d		", x); printf ("Nota 2: %d		\n", y);
	printf ("Media aritmetica: %d	", z); printf ("Media ponderada: %d", w);
	return 0;
}


int main () {
	
	le_notas ();
	calc_media (x, y);
	exibe_dados (x, y, z, w);
	
	return 0;
	}


