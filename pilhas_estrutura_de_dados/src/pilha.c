#define N 50
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
	int val;
	float vet[N];
};

Pilha* criar_pilha(){
  Pilha* p = (Pilha*)malloc(sizeof(Pilha*));
  p->val = 0;
  return p;
}

void push(Pilha* p, float v){
	if(p->val == N){
		printf("Capacidade maxima \n");
		exit(1);
	}
	p->vet[p->val] = v;
	p->val++;
}


float pop(Pilha* p){
	float v;
	if(vazia(p)){
		printf("Pilha vazia \n");
		exit(1);
	}
	v = p->vet[p->val - 1];
	p->val--;
	return v;
}

int vazia(Pilha* p){
	return (p->val == 0);
}

void liberar(Pilha* p){
	free(p);
}

float topo(Pilha* p){
	if(vazia(p)){
	  printf("Pilha vazia \n");
	  exit(1);
	}
	return p->vet[p->val -1];
}
