#include <stdio.h>

int main()
{
    int idade;
    printf("digite sua idade");
    scanf("%d", &idade);

    if(idade >= 10)
    {
         printf("Maior de Idade\n");
    }
    else
    {
        printf("Menor de idade");
    }
    return 0;
}
