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