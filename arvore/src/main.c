#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(int argc, char *argv[]){
	Arv* a1 = criar('m', criar_vazia(), criar_vazia());
	Arv* a2 = criar('a', criar_vazia(), a1);
	Arv* a3 = criar('p', a1, a2);
	printf("%d\n", vazia(a1));
	printf("%d\n", vazia(criar_vazia()));
	imprimir_arvore(a3);
	printf("%d\n", pertence(a3, 'm'));
	printf("%d\n", pertence(a3, 'J'));
	a3 = liberar(a3);

	return 0;
}
