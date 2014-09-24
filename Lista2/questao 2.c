/*2­ Os programas (trechos de código) abaixo possuem erros? Qual(is)? Como
deveriam ser? Comente ?

A) p esta apontando para 100, e nao para a variavel x. 
Para ficar correto deveria ser *p = x;


B) Nao ha erro, porem nao ha necessidade de temp ser um ponteiro.

void troca (int *i, int *j) {
int temp;
temp = *i;
*i = *j;
*j = temp;
}


C) A funcao esta puxando um string, em vez de um char
e alem disso esta comparando enderecos e nao os valores, para ficar correto, deveria adicionar * as variaveis:
char *a, *b;
a = "abacate";
b = "uva";
if (*a < *b)
printf ("%s vem antes de %s no dicionário", *a, *b);
else
printf ("%s vem depois de %s no dicionário", *a, *b);

*/
