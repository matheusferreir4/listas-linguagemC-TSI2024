#include <stdio.h>
void f(int *a, int b) {
  *a += 1;
  b += 1;
printf("a = %d\tb = %d",*a,b);
}
int main() {
  int a;
  a = 10;
  f(&a, a);
printf("a = %d",a);
  
return 0;
}