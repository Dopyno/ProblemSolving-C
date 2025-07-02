#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_ORDERS 20

char orderHistory[MAX_ORDERS][50];
int orderCount = 0;

void start();
void showMenu();
void askExtras();
void makingCoffee(int selection);
void printTotal();
void addToHistory(const char *drink);
void printSummary();
void printTotal();

float total = 0.0, americano = 3.80, espresso = 1.95, latte = 4.40,
      cappuccino = 4.40, hotChocolate = 3.90, tea = 1.95;
int choice;
char repeat;

int main() {
  system("clear");
  start();
  do {
    system("clear");
    showMenu();
    printf("Please enter you selection: ");
    scanf("%d", &choice);
    makingCoffee(choice);
    // printTotal();
    printf("\nWould you like another coffee? (y/n): ");
    scanf(" %c", &repeat);
  } while (repeat == 'y' || repeat == 'Y');
  printTotal();
  return 0;
}
void start() {
  printf("\nWelcome, this is the best 'C' coffee ever!!!\n");
  printf("\nStarting coffee machine...\n");
  sleep(3);
}
void printTotal() {
  printf("\n============= Order Summary =============\n");
  printSummary();
  printf("*Total to pay: £%.2f\n", total);
  printf("===========================================\n");
}
void printSummary() {
  if (orderCount == 0) {
    printf("No orders placed.\n");
  } else {
    for (int i = 0; i < orderCount; i++) {
      printf("%d. %s\n", i + 1, orderHistory[i]);
    }
  }
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
}

void addToHistory(const char *drink) {
  if (orderCount < MAX_ORDERS) {
    strcpy(orderHistory[orderCount], drink);
    orderCount++;
  }
}
void makingCoffee(int selection) {
  switch (selection) {
    case 1:
      total += americano;
      printf("You chose Americano.\n");
      askExtras();
      printf("☕ Making your Americano...\n");
      addToHistory("Americano ----- £3.80");
      sleep(2);
      break;
    case 2:
      total += espresso;
      printf("You chose Espresso.\n");
      askExtras();
      printf("☕ Making your Espresso...\n");
      addToHistory("Espresso ------ £1.95");
      sleep(2);
      break;
    case 3:
      total += latte;
      printf("You chose Latte.\n");
      askExtras();
      printf("☕️ Making your Latte...\n");
      addToHistory("Latte --------- £4.40");
      sleep(2);
      break;
    case 4:
      total += cappuccino;
      printf("You chose Cappuccino.\n");
      askExtras();
      printf("☕️ Making your Cappuccino...\n");
      addToHistory("Cappuccino ---- £4.40");
      sleep(2);
      break;
    case 5:
      total += hotChocolate;
      printf("You chose Hot Chocolate.\n");
      askExtras();
      printf("☕️ Making your Hot Chocolate...\n");
      addToHistory("Hot Chocolate - £3.90");
      sleep(2);
      break;
    case 6:
      total += tea;
      printf("You chose Tea.\n");
      askExtras();
      printf("🫖 Making your Tea...\n");
      addToHistory("Tea ----------- £1.95");
      sleep(2);
      break;
    default:
      printf("\n❌Invalid selection, Please choose from 1-6\n");
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