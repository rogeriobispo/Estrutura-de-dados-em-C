#include "arvore.h"
#include <stdlib.h>
#include <stdio.h>

struct arv{
	char info;
	struct arv* esq;
	struct arv* dir;
};

Arv* criar_vazia(){
	return NULL;
}

Arv* criar(char c, Arv* sae, Arv* sad){
	Arv* p = (Arv*)malloc(sizeof(Arv));
	p->info = c;
	p->esq = sae;
	p->dir = sad;
	return p;
}

int vazia(Arv* a){
	return a == NULL;
}

void imprimir(Arv* arv){
	if(!vazia(arv)){
		printf("%c", arv->info);
		imprimir(arv->esq);
		imprimir(arv->dir);
	}
}

void imprimir_arvore(Arv* arv){
	printf("<");
	if(!vazia(arv)){
			printf("%c", arv->info);
			imprimir_arvore(arv->esq);
			imprimir_arvore(arv->dir);
		}
	printf(">");
}

Arv* liberar(Arv* a){
	if(!vazia(a)){
		liberar(a->esq);
		liberar(a->dir);
	}
	return NULL;
}

int pertence(Arv* a, char c){
	if(vazia(a)){
		return 0;
	}

	return (a->info == c) || (pertence(a->esq, c)) || (pertence(a->dir, c));
}
