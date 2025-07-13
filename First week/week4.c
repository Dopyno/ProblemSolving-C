#include <stdio.h>

int main() {
  int a, b;

  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      printf("%d, %d\n", i, j);
    }
    printf("\n");
  }
  return 0;
}
