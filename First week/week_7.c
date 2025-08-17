
// #include <stdio.h>

//     int
//     main() {
//   int num;
//   printf("Enter a number between 1 and 10: ");
//   scanf("%d", &num);

//   // INPUT VALIDATION
//   while (num < 1 || num > 10) {
//     printf("Invalid. Try again: ");
//     scanf("%d", &num);
//   }

//   printf("Valid number: %d\n", num);
//   return 0;
// }

// #include <stdio.h>
//     int
//     main() {
//   int choice;
//   float grades[3], sum = 0.0;

//   printf("=== Grade ===\n");
//   printf("1. Enter Grades\n2. Exit\n");
//   printf("Your choice: ");
//   scanf("%d", &choice);

//   if (choice == 1) {
//     printf("Enter 3 grades:\n");
//     for (int i = 0; i < 3; i++) {
//       scanf("%f", &grades[i]);
//       sum += grades[i];
//     }
//     printf("Average grade: %.2f\n", sum / 3);
//   } else {
//     printf("Goodbye!\n");
//   }

//   return 0;
// }

/*
strlen() - length of string
strcpy() - copy string
strcat() - concatenate
strcmp() - compare 2 strings
*/

// #include <stdio.h>
// #include <string.h>

//     int
//     main() {
//   char str1[50] = "Hello";
//   char str2[50] = "world";
//   char copy[50];
//   char concat[100];

//   // Strlen
//   printf("Length of string is: %lu\n", strlen(str1));

//   // Strcpy
//   strcpy(copy, str1);
//   printf("After strcpy, copy = %s\n", copy);

//   // Strcat
//   strcpy(concat, str1);
//   strcat(concat, " ");   // append a space
//   strcat(concat, str2);  // append WORLD
//   printf("After strcat, concat = %s\n", concat);

//   // Str compare
//   if (strcmp(str1, str2) == 0) {
//     printf("str1 and str2 are equal\n");
//   } else if (strcmp(str1, str2) < 0) {
//     printf("str1 is less than str2\n");
//   } else {
//     printf("str1 is greater than str2\n");
//   }

//   return 0;
// }

// Task : Write a C program that takes a
//        string(from the user) as input and prints its length,
//        excluding the null terminator(\0).
// #include <stdio.h>
// #include <string.h>

//        int main() {

//         char source[] = "Hello, World!";

//         char dest[100];

//         strcpy(dest, source);

//         printf("%s\n", source);
//         printf("%s", dest);

//     return 0;
// }

//  Task 3 Join "Hello" and ", World!" with
//     strcat() and print the result
//         .

//     Task 4 Join "apple" and "banana" with strcat()
//         .Compare with strcmp() and print : equal(1),
//     before(2),
//     or after(3)
//         .

//     Task 5 Swap "Hello" and "World" using a temp variable.Show before and
//     after.

//     TEMPLATE :
// #include <stdio.h>
// #include <string.h>

//     int main() {

//         char name1[] = "Hello";
//         char name2[] = ", World!";
//         char concat[100];
//         strcat(concat, name1);
//         strcat(concat, name2);
//         printf("After the concatenation: %s", concat);
//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//   char name1[] = "apple";
//   char name2[] = "banana";
//   char concat[100];

//   if (strcmp(name1, name2) == 0){
//     printf("Equal (1)");
//   }

//   strcat(concat, name1);
//   strcat(concat, " ");
//   strcat(concat, name2);
//   printf("After the concatenation: %s", concat);
//   return 0;
// }

#include <stdio.h>
#include <string.h>

void printTheStart();
void add(int num1, int num2);
void subtract(int num1, int num2);
void multiply(int num1, int num2);
void divide(int num1, int num2);
void calculator(int num1, char operation, int num2);

int main() {
  int num1 = 0, num2 = 0;
  char operation = ' ';
  
  printTheStart();

  scanf("%d %c %d", &num1, &operation, &num2);

  calculator(num1, operation, num2);

  return 0;
}

void printTheStart() {
  printf("***Welcome to C calculator!***\n");
  printf("------------------------------\n");
  printf("Please type your expresion: \n");
}

void add(int num1, int num2) {
  int total = num1 + num2;
  printf("Total: %d\n", total);
}
void subtract(int num1, int num2) {
  int total = num1 - num2;
  printf("Total: %d\n", total);
}
void multiply(int num1, int num2) {
  int total = num1 * num2;
  printf("Total: %d\n", total);
}
void divide(int num1, int num2) {
  int total = num1 / num2;
  printf("Total: %d\n", total);
}

void calculator(int num1, char operation, int num2) {
  switch (operation) {
    case '+':
      add(num1, num2);
      break;
    case '-':
      subtract(num1, num2);
      break;
    case '*':
      multiply(num1, num2);
      break;
    case '/':
      divide(num1, num2);
      break;
    default:
      printf("Thank you for using the calculator!");
      break;
  }
}