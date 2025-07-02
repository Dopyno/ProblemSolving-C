#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void start();
void showMenu();
void askExtras();
int makingCoffee(int selection);

float total = 0.0, americano = 3.80, espresso = 1.95, latte = 4.40,
      cappuccino = 4.40, hotChocolate = 3.90, tea = 1.95;
int choice;
char repeat;

int main() {
  system("clear");
  start();
  do {
    showMenu();
    printf("Please enter you selection: ");
    scanf("%d", &choice);
    makingCoffee(choice);
    printf("\nWould you like another coffee? (y/n): ");
    scanf(" %c", &repeat);
  } while (repeat == 'y' || repeat == 'Y');

  return 0;
}
void start() {
  printf("\nWelcome, this is the best 'C' coffee ever!!!\n");
  printf("\nStarting coffee machine...\n");
  sleep(3);
}

void showMenu() {
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
int makingCoffee(int selection) {
  switch (selection) {
    case 1:
      printf("You chose Americano.\n");
      askExtras();
      printf("☕ Making your Americano...\n");
      sleep(2);
      total += americano;
      break;
    case 2:
      printf("You chose Espresso.\n");
      askExtras();
      printf("☕ Making your Espresso...\n");
      total += espresso;
      break;
    case 3:
      printf("You chose Latte.\n");
      askExtras();
      printf("☕️ Making your Latte...\n");
      total += latte;
      break;
    case 4:
      printf("You chose Cappuccino.\n");
      askExtras();
      printf("☕️ Making your Cappuccino...\n");
      total += cappuccino;
      break;
    case 5:
      printf("You chose Hot Chocolate.\n");
      askExtras();
      printf("☕️ Making your Hot Chocolate...\n");
      total += hotChocolate;
      break;
    case 6:
      printf("You chose Tea.\n");
      askExtras();
      printf("🫖 Making your Tea...\n");
      total += tea;
      break;
    // default:
    //   printf("Invalid selection, Please make a selection from 1-6");
    //   break;
  }
}

void askExtras() {
  char milk, sugar;

  printf("Would you like sugar? (y/n): ");
  scanf(" %c", &sugar);

  printf("Would you like milk? (y/n): ");
  scanf(" %c", &milk);

  if (sugar == 'y' || sugar == 'Y') {
    printf("🍬 Adding sugar...\n");
  }
  if (milk == 'y' || milk == 'Y') {
    printf("🥛 Adding milk...\n");
  }
}