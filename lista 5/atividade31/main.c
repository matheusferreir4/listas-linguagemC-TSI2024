#include <stdio.h>
void f(int *a, int b) {
  *a += 1;
  b += 1;
printf("a = %d\tb = %d",*a,b);
}
int main() {
  int a, b;
  a = 10;
  b = 5;
  f(&b, a);
printf("a = %d\tb = %d",a,b);
return 0;
}
