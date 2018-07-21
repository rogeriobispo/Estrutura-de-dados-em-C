#include <stdio.h>
#include "ponto.h"

int main(){
	printf("OlaMundo");
	Ponto* p1 = criar_ponto(1.0, 2.0);
	Ponto* p2 = criar_ponto(1.0, 2.0);
	float dist = distancia(p1, p2);
	printf("Distancia %f\n", dist);
	liberar_ponto(p2);
	liberar_ponto(p1);
	return 0;
}
