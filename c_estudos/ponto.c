#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"

struct ponto{
	float x;
	float y;

	};

Ponto* criar_ponto(float x, float y){
	Ponto* p = (Ponto*)malloc(sizeof(Ponto));
	if(p == NULL){
		printf("Memória insuficiente \n");
		exit(1);
	}
	p->x = x;
	p->y = y;
	return p;
}

void  liberar_ponto(Ponto* p){
	free(p);
}

void acessar_pontos(Ponto* p, float* x, float* y){
	*x = p->x;
	*y = p->y;
}

void atribuir_valores(Ponto* p, float x, float y){
	p->x = x;
	p->y = y;
}

float distancia(Ponto* p1, Ponto* p2){
	float dx = p2->x - p1->x;
	float dy = p2->y - p1->y;
	return 10;
}
