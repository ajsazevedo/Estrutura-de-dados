/*3) Suponha que os elementos do vetor v s�o do tipo int e cada int ocupa 8 bytes
no seu computador. Se o endere�o de v[0] � 55000, qual o valor da
express�o v + 3?


R: 55024
*/



#include <stdio.h>
#include <stdlib.h>


void main () {
	
	int v[] = {1, 2, 3, 4, 5};
	
	printf ("%p\n", v);
	printf ("%p\n", v+3);
	
}
	
	
