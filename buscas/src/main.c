#import <stdio.h>
int busca_linear(int n, int* vet, int e){
	int i;
	for (i = 0; i < n; ++i) {
		if(vet[i] == e){
			return i;
		}
	}
	return -1;
}

int busca_linear_ordenada(int n, int* vet, int e){
	int i;
	for (i = 0; i < n; ++i) {
		if(vet[i] == e ){
			return i;
		}else if(vet[i] > e){
			return -1;
		}
	}
	return -1;
}

int busca_binaria(int n, int* v, int e){
	int ini = 0;
	int fim = n - 1;
	int meio;
	while(ini <= fim){
		meio = (ini + fim) / 2;
		if(e < v[meio])
			fim = meio -1;
		else if(e > v[meio])
			ini = meio + 1;
		else
			return meio;
	}
	return -1;

}

int busca_binaria_recursiva(int n, int* v, int e){
	int ini = 0;
	int fim = n - 1;
	int meio = (ini + fim) / 2;
	if(e < v[meio])
		busca_binaria_recursiva(n , meio -1 ,e);
	else if(e < v[meio])
		busca_binaria_recursiva(n , meio + 1 ,e);
	else
		return 1;

	return 0;
}

int main(int argc, char **argv) {
	//int v[] = {10,5,4,3,2,1};
	//int tam = sizeof(v) / sizeof(int);
	//printf("%d\n", busca_linear(tam, v, 4));
	//printf("%d\n", busca_linear(tam, v, 4000));
	// ordenado
	int v2[] ={1,5,6,7,9,10};
	int tam2 = sizeof(v2) / sizeof(int);
	//printf("%d\n", busca_linear_ordenada(tam2, v2, 3));
	//printf("%d\n", busca_linear_ordenada(tam2, v2, 6));
	printf("%d\n", busca_binaria_recursiva(tam2, v2, 3));
	printf("%d\n", busca_binaria_recursiva(tam2, v2, 6));
	return 0;
}
