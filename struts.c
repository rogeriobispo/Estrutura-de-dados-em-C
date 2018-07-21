#include <stdio.h>

struct pessoa{
  int idade;
  float peso;
};

int main(int argc, char *argv[]){
  struct pessoa p;
  struct pessoa *pp;
  pp = &p;
  (*pp).idade = 25;
  (*pp).peso = 75.5;
  printf("Idade: %d\n", pp->idade);
  printf("Idade: %.2f\n", pp->peso);
  printf("Digite sua idade:");
  scanf("%d", &p.idade);
  printf("Digite seu peso:");
  scanf("%f", &p.peso);
  printf("%d %.2f\n", p.idade, p.peso);
  return 0;
}
