#include <stdio.h>
#include <string.h>

int main() {
  int a, b;

  printf("enter a number: ");
  scanf("%d", &a);
  printf("enter a second number: ");
  scanf("%d", &b);

  for (int i = 1; i < a; i++) {
    for (int j = 1; j < b; j++) {
      int results = a * b;
      printf("%d * %d = %d\n", i, j, results);
    }
    printf("\n");
  }
  return 0;
}
