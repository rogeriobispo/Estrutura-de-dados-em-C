#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void) {
	Pilha* p;
	p = criar_pilha();
	push(p, 10);
	push(p, 20);
	push(p, 30);
	printf("Topo: %.2f\n",topo(p));
	pop(p);
	printf("Topo: %.2f\n",topo(p));
	printf("Topo: %.2f\n",topo(p));
	pop(p);
	printf("Topo: %.2f\n",topo(p));
	pop(p);
	printf("Topo: %.2f\n",topo(p));
	return 0;
}
