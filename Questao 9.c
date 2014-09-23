	/*Questao 9 */
#include <stdio.h>
#include <stdlib.h>



int funcaosoma (int vetor1[], int vetor2[]){
		int i;
		int vetor3[3];
		
		if (sizeof (vetor1) != sizeof (vetor2)) {
			printf ("ERRORRR");
			return 1;
			
		} else {	
		 
			for (i=0; i<3; i++) {
				vetor3[i] = vetor1[i] + vetor2[i];
			}
			for (i=0; i<3; i++) {
				printf ("%d	+	%d	=	%d\n", vetor1[i], vetor2[i], vetor3[i]);
			}
			
			return 0;
		
		}
	
}


int main () {
	
	int vet1[3] = {0, 1, 2};
	int vet2[3] = {1, 2, 3};
	
	funcaosoma (vet1, vet2);
	
	return 0;
	}


