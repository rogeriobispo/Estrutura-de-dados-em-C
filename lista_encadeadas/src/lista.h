typedef struct lista Lista;

// Função de criação da lista
Lista* criar_list();

// Função que insere no inicio da lista
Lista* inserir_list(Lista* l, int i);

// imprimir lista
void imprimir_lista(Lista* l);

//verifica se alista esta vazia
int vazia(Lista* l);

// busca elemento dentro da lista
Lista* buscar(Lista* l, int v);
