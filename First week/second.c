
#include <stdio.h>

int main() {


  char letter = "\0";

  printf("teacher input A, B, C, D, F: \n");
  scanf("%s", &letter);

  switch (tolower(letter)) {
    case 'a':
      printf("your grade is %c - perfect", letter);
      break;
      case 'b':
      printf("your grade is %c - still perfect", letter);
      
      break;
      case 'c':
      printf("your grade is %c - perfect", letter);
      
      break;

    case 0:
      printf("Thank you for visiting us!");
      break;
  }

  return 0;
}