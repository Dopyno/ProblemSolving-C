#include <stdio.h>

int main() {

  printf("Please enter the number of rows for the triangle: ");
  int num = 0;
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c", '#');
    }
    printf("\n");
  }
  return 0;
}
