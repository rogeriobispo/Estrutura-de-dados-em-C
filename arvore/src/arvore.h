typedef struct arv Arv;
Arv* criar_vazia();
Arv* criar(char c, Arv* sae, Arv* sad);
void imprimir(Arv* arv);
void imprimir_arvore(Arv* arv);
int vazia(Arv* a);
Arv* liberar(Arv* a);
int pertence(Arv* a, char c);
