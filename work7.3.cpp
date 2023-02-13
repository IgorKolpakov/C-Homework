#include <stdio.h>

// function:
int calc(int a, int b) {
  return (int)(a*a == b || b*b == a); 
}
int calc(int a, int b, int c) {
  return calc(a, b) + calc(a, c) + calc(b, c);
}
void calc(int a, int b, int c, int *value) {
  (*value) = calc(a, b, c);
}
void calc(int a, int b, int c, int &value) {
  value = calc(a, b, c);
}

int main() {
  int a, b, c, value = 0;
  int *point = new int;
  
  // input:
  printf("a: ");
  scanf("%i", &a);
  printf("b: ");
  scanf("%i", &b);
  printf("c: ");
  scanf("%i", &c);

  calc(4, 16, 2, point); // pointer
  calc(7, 49, 221, &value); // link
  
  // output & clear:
  printf("return value: %i\npointer: %i\nlink: %i\n", calc(a, b, c), *point, value);
  delete point;
}
