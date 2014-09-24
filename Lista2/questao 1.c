/*1) Suponha que v é um vetor. Descreva a diferença conceitual entre as
expressões v[3] e v + 3.

a expressao v[3] referencia a uma posicao 3 de um certo vetor v, retornando o dado contido nela
ja a expressao v+3 referencia ao endereco de memoria dado por v somado de 3 posicoes, retornando 
uma posicao de memoria*/



#include <stdio.h>
#include <stdlib.h>


void main () {
	
	int v[] = {1, 2, 3, 4, 5};
	
	printf ("%d\n", v[3]);
	printf ("%p\n", v+3);
	
	
}
