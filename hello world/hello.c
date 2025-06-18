#include <ctype.h>
#include <stdio.h>
#include <string.h>

#pragma region function prototype
#define MAX_USERS 10  //* Maximum number of users
struct User           //*Structure to represent a user
{
  int age;
  char firstName[10];
  char lastName[10];
  char email[25];
  int account;
};
void greetingMsg();
void saluteUser();
void getUserDetail(struct User *u);
void printUsers(struct User user);
int optionStartMenu();
#pragma endregion

int main() {
  struct User users[MAX_USERS];
  int answer, n;

  greetingMsg();

  do {
    int answer = optionStartMenu();
    switch (answer) {
      case 1:

        n++;
        for (int i = 0; i < n; i++) {
          getUserDetail(&users[i]);
        }
        break;

      case 2:

        break;
      case 0:
        saluteUser();
        break;
    }

  } while (answer != 0);
  {
  }

  // for(int i = 0; i < n; i++){
  // getUserDetail(&users[i]);
  // };

  // printf("\n------User Details------\n");
  // for(int i = 0; i < n; i++){
  //     printUsers(users[i]);
  //     };

  return 0;
}

#pragma region function
void greetingMsg() {
  printf(
      "\n\n\n**************<<<<<<<<<<<<<<<>>>>>>>>>>>>>>*****************\n");
  printf("**********          Welcome to Silver Bank!!        *********\n");
  printf("**************<<<<<<<<<<<<<<<>>>>>>>>>>>>>>*****************\n\n\n");
}

void getUserDetail(struct User *u) {
  int valid = 0;
  int input;
  do {
    printf("You must have 18 to open an account! Please enter your age: ");
    if (scanf("%d", &u->age) != 1 || u->age <= 0) {
      printf("❌ Invalid input. Please enter a valid age (positive number).\n");
      while (getchar() != '\n');  // clear invalid input
    } else {
      valid = 1;
    }
  } while (!valid);

  if (u->age > 18) {
    printf("\n✅ You're eligible to open an account!\n");

    printf("Please enter your first name: ");
    scanf("%s", u->firstName);

    printf("Please enter your last name: ");
    scanf("%s", u->lastName);

    printf("Please enter your email address: ");
    scanf("%s", u->email);

    do {
      printf("Please enter a positive deposit amount in £: ");

      if (scanf("%d", &input) != 1 || input <= 0) {
        printf("❌ Invalid input. Please enter a valid positive number.\n");

        // Clear input buffer to avoid infinite loop if non-numeric entered
        while (getchar() != '\n');
      } else {
        u->account = input;  // Store valid input in user's account
        break;               // Exit loop when input is valid
      }

    } while (1);

    printf("\n🎉 Account successfully created for %s %s!\n", u->firstName,
           u->lastName);
    printf("📧 Email: %s\n", u->email);
    printf("💰 Initial deposit: £%d\n", u->account);

  } else {
    printf(
        "\n🚫 Sorry, you are too young to open an account.\n"
        "You must be at least 18 years old.\n\n\n");
  };
}

int optionStartMenu() {
  int n;
  printf("Please choose one of the following option or press '0' to exit! \n");
  printf("1.\tOpen acount.🏦\n");
  printf("2.\tMy account.💷\n");
  printf("0.\tExit.🚀\n");
  printf("Enter your selection: ");
  scanf("%d", &n);
  return n;
}

void printUsers(struct User user) {
  printf("Full name: %s %s\n", user.firstName, user.lastName);
  printf("Email: %s\n", user.email);
  printf("Today you have an account of £%d.\n", user.account);
}
void saluteUser() { printf("\nThank you for choosing Silver Bank today!\n"); }
#pragma endregion