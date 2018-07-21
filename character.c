#include <stdio.h>

int letra(char c){
  if (c < '0' || c > '9')
    return 1;
  return 0;
}
int main(){
  char c = 97;
  printf("%d %c\n", c, c);
  printf("%d\n", letra('A'));
  return 0;
}
