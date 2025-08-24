#include <stdio.h>

int main(){


    return 0;
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