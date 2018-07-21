#include <stdio.h>

void f(int *n)
{
  *n = 5;
}
int main()
{
  int n = 10; //declara um ponteiro
  int *p;

  p = &n;
  *p = 20;
  f(&n);
  printf("%d\n", n);
  printf("%d\n", *p);

  return 0;
}
