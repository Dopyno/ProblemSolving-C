
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

#include <stdio.h>
#include <string.h>

    int
    main() {
  char str1[50] = "Hello";
  char str2[50] = "world";
  char copy[50];
  char concat[100];

  // Strlen
  printf("Length of string is: %lu\n", strlen(str1));

  // Strcpy
  strcpy(copy, str1);
  printf("After strcpy, copy = %s\n", copy);

  // Strcat
  strcpy(concat, str1);
  strcat(concat, " ");   // append a space
  strcat(concat, str2);  // append WORLD
  printf("After strcat, concat = %s\n", concat);

  // Str compare
  if (strcmp(str1, str2) == 0) {
    printf("str1 and str2 are equal\n");
  } else if (strcmp(str1, str2) < 0) {
    printf("str1 is less than str2\n");
  } else {
    printf("str1 is greater than str2\n");
  }

  return 0;
}