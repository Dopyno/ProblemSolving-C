#include <stdio.h>

// void myFunction(){
//     int x = 5;
//     printf("%d\n", x);
// }

void displayInfo(char name[], int age, float height);

int main() {
  displayInfo("Mihai", 30, 1.80);
  displayInfo("Jose", 29, 1.81);
  return 0;
}
void displayInfo(char name[], int age, float height) {
  printf("Your name is: %s\n", name);
  printf("Your age is: %d\n", age);
  printf("Your height is: %.2f\n\n", height);
}

// #include <stdio.h>

// void print_all(const int a[], int n) {
//   for (int i = 0; i < n; i++) printf("%d ", a[i]);
//   printf("\n");
// }

// int max_of(const int a[], int n) {
//   int m = a[0];
//   for (int i = 1; i < n; i++)
//     if (a[i] > m) m = a[i];
//   return m;
// }

// int main(void) {
//   int a[5];
//   for (int i = 0; i < 5; i++) {
//     printf("Enter a[%d]: ", i);
//     scanf("%d", &a[i]);
//   }

//   while (1) {
//     int choice;
//     printf("\nMenu:\n1) Print all\n2) Print max\n3) Exit\nChoose: ");
//     if (scanf("%d", &choice) != 1) return 0;

//     switch (choice) {
//       case 1:
//         print_all(a, 5);
//         break;
//       case 2:
//         printf("Max = %d\n", max_of(a, 5));
//         break;
//       case 3:
//         printf("Goodbye!\n");
//         return 0;
//       default:
//         printf("Invalid choice\n");
//         break;
//     }
//   }
// }

// SCENARIO

// At each ride entrance (and with parental consent), guests (that how they call
// customers at Disney) must be checked for like their name, age and height for
// safety and security

// TASK
// Write a function called checkGuest() that:

// i) Accepts 3 parameters: name, age, and height - you decide the datatypes.
// ii) Prints out their details in a clear, friendly format
// iii) Call the function twice with different guest data (randomly).