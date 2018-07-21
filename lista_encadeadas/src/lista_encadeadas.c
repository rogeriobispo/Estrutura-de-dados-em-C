/*
 ============================================================================
 Name        : lista_encadeadas.c

 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
int mensagem(Lista* lista){
  if(vazia(lista))
	  puts("Lista vazia!\n");
  else
	  puts("Lista Não vazia \n");

}

int main(void) {
	Lista* lista;
	mensagem(lista);
	lista = criar_lista();
	lista = inserir_list(lista, 10);
	lista = inserir_list(lista, 20);
	lista = inserir_list(lista, 5);
	imprimir_lista(lista);
	mensagem(lista);
	int valor = 10;
	if(buscar(lista, valor) == NULL)
		printf("Não encontrou o elemento %d\n", valor);
	else
		printf("Encontrou o elemento %d\n", valor);

	return 0;
}
