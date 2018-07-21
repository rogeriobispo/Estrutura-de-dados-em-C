#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 2

int main(){
  int *mat;
  int i, j;

  mat =(int*)malloc(LIN*COL*sizeof(int));
  if (mat == NULL)
  {
    printf("Memória insuficiente \n");
    exit(1);
  }

  for(i = 0; i < LIN * COL; i++){
    mat[i] = i;
  }

  printf("%d\n", mat[1]);
}
