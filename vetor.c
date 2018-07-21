#include <stdio.h>
void f(int v[10]);

int main()
{
    int v[10], i;

    for(i = 0; i < 10; i++) {
            v[i] = i * 10;
        }
    for(i = 0; i < 10; i++){
            printf("Valor: %d\n", v[i]);
        }

    for(i = 0; i < 10; i++){
            printf("Endereco Memória: %d\n", v + i);
        }

    for(i = 0; i < 10; i++){
            printf("Valor: %d\n", *(v + i));
        }
    f(v);
    printf("%d\n", v[0]);
    return 0;
}

void f(int v[10])
{
    v[0] = 200;
}
