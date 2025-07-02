#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void start();
void showMenu();

float total = 0.0, americano = 3.80, espresso = 1.95, latte = 4.40,
      cappuccino = 4.40, hotChocolate = 3.90, tea = 1.95;
int choice;

int main() {
  start();
  do {
    showMenu();
    printf("Please enter you selection: ");
    scanf("%d", &choice);
  } while (choice != 0);

  return 0;
}
void start() {
  printf("\nWelcome, this is the best 'C' coffee ever!!!\n");
  printf("\nStarting coffee machine...\n");
  sleep(3);
}

void showMenu() {
  system("clear");
  printf("\n==============Coffee Menu===============\n");
  printf("1. Americano ----- £3.80\n");
  printf("2. Espresso ------ £1.95\n");
  printf("3. Latte --------- £4.40\n");
  printf("4. Cappuccino ---- £4.40\n");
  printf("5. Hot Chocolate - £3.90\n");
  printf("6. Tea ----------- £1.95\n");
  printf("0. Exit\n");
  printf("========================================\n");
  printf("Total to pay: £%.2f\n", total);
  printf("========================================\n");
}
void askExtras() {
  char milk, sugar;

  printf("");
}