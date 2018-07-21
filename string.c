#include <stdio.h>
#include <string.h>

int main(){
  char nome[50];
  scanf("%[^\n]", nome);
  printf("Nome: %s\n", nome);
  int tam = strlen(nome);
  int i = 0;

  while(i < tam){
    printf("%c\n", nome[i]);
    i++;
  }
  i = 0;
  while(nome[i] != '\0')
  {
    printf("%c\n", nome[i]);
    i++;
  }
  return 0;
}
