
#include <stdio.h>
#include <stdlib.h>

int main() {
  char sign;
  float num1, num2;

  printf("Type your expresion to be calculated: \n");
  scanf("%f%c%f", &num1, &sign, &num2);

  switch (sign) {
    case '+':
      printf("%.2f", num1 + num2);
      break;
    case '-':
      printf("%.2f", num1 - num2);
      break;
    case '/':
      printf("%.2f", num1 / num2);
      break;
    case '*':
      printf("%.2f", num1 * num2);
      break;
  }

  return 0;
}