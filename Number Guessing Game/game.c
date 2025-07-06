#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gameInfo();

int main(void) {
  int number = 0;
  char answer;
  gameInfo();

  do {
    int userNumber = 0;
    srand(time(0));
    int randomNumber = rand() % 10 + 1;

    while (userNumber != randomNumber) {
      printf("\nPlease enter a number from 1 - 20! \n");
      scanf("%d", &userNumber);

      if (userNumber > randomNumber)
        printf("❌Sorry, the number is too high⬆️\n");
      else if (userNumber < randomNumber)
        printf("❌Sorry, the number is too low⬇️\n");
      else
        printf("Correct, you are the superstar!🎉\n");
    }

    printf("\nDo you want to play again? (Y / N)\n");
    scanf(" %c", &answer);

  } while (answer == 'y' || answer == 'Y');

  return 0;
}

void gameInfo() {
  printf("\n         ***  Welcome  ***\n");
  printf("\n*** Let's play Number Guessing Game! ***\n");
}
