#include <stdio.h>

int numero = 10;

int somar(int n1, int n2)
{
    int soma = n1 + n2;
    return soma;
}

int main(int argc, char** argv)
{
    char nome;
    scanf("%c %c", &nome);
    int resultado = somar(10, 20);
    float pi = 3.1415;

    printf("%d\n", numero);
    printf("%f\n", pi);
    printf("Ola Mundo");
    return 0;
}

