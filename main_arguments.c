#include <stdio.h>

int main(int argc, char *argv[]){
// argc = numero de argumento passado para o programa
// argv = vetor de argumentos passados
  int i;
  for(i = 0; i < argc; i++){
    printf("%s\n", argv[i]);
  }

  return 0;
}
