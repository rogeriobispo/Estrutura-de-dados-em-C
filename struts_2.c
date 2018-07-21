#include <stdio.h>
#include <stdlib.h>
typedef struct animal{
  int age;
}anima;
typedef struct pessoa{
  int idade;
  float peso;
  animal ani;
}pessoa;

int main(int argc, char *argv[]){
  pessoa *p;
  p = (struct pessoa*)malloc(sizeof(struct pessoa));
  p->idade = 20;
  p->peso = 76.44;
  printf("%d\n", p->idade);
  (p->ani).age = 10;
  printf("%d\n", (p->ani).age);

  return 0;
}
