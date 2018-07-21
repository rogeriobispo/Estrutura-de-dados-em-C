typedef struct ponto Ponto;
/*
 * Aloca e retorna um ponto com coordenadas (x,y)
 */
Ponto* criar_ponto(float x, float y);
/*
 * remove um ponto da memória com free
 */
void liberar_ponto(Ponto* p);
/*
 * Acessa um ponto na memória
 */
void acessar_ponto(Ponto* p, float* x, float y);
/*
 * atribui coordenadas (x,y)
 */
void atribuir_valores(Ponto* p, float x, float y);
/*
 * Calcula distancia entre dois pontos
 */
float distancia(Ponto* p1, Ponto* p2);
