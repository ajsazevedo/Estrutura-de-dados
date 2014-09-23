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

int ordena (int *vetor) {
	int i, j, aux, n;
	
	n=3;
	
	for(i= 0;i < 3;i++){
		
		for(j= 1; j< n-i; j++){

			if(vetor[j-1]>vetor[j]){
			
				aux= vetor[j];
				vetor[j]=vetor[j-1];
				vetor[j-1]=aux;		
			}
		}
	}	
	
	if ((vetor[0] == vetor[1]) && (vetor[0] == vetor[2])) 
		return 1;
	else
		return 0;
}

int main () {
	int numeros[3];
	int i, a ;

	printf ("digite o primeiro numero inteiro:");
	scanf ("%d", &numeros[0]);
	printf ("digite o segundo numero inteiro:");
	scanf ("%d", &numeros[1]);
	printf ("digite o terceiro numero inteiro:");
	scanf ("%d", &numeros[2]);
	
	a = ordena (numeros);
	
	printf("%d\n",a); // retorna se são iguais ou diferentes

	for (i=0; i<3; i++) {
		printf ("%d\n", numeros[i]);
	}
	return 0;
	}
