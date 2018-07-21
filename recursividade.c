#include <stdio.h>
int fatorial(int fat);
int main()
{
  printf("Fatorial: %d\n", fatorial(4));
}

int fatorial(int n){
  if( n ==0 || n == 1){
    return 1;
  }
  return n * fatorial(n - 1);
}
