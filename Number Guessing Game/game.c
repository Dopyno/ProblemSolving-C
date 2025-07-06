#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gameInfo();
void playRound(int maxNum, int level);
void level();

int number = 0, score = 0, maxNum = 0, choice = 0, lev = 0;
char answer;

int main(void) {
  srand(time(0));

  gameInfo();

  do {
    level();
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        lev = 10;
        playRound(10, lev);
        break;
      case 2:
      lev = 50;
      playRound(10, lev);
      break;
      case 3:
      lev = 100;
      playRound(10, lev);
      break;

      case 0:
        break;
    }
    printf("\nDo you want to play again? (Y / N)\n");
    scanf(" %c", &answer);

  } while (answer == 'y' || answer == 'Y');

  printf("\n👋 Thanks for playing! Final Score: %d win(s)\n", score);

  return 0;
}

void gameInfo() {
  printf("\n         ***  Welcome  ***\n");
  printf("\n*** Let's play Number Guessing Game! ***\n");
}
void level() {
    printf("\n 1 - 🟢 Easy (1 - 10) ");
    printf("\n 2 - 🟡 Medium (1 - 50) ");
    printf("\n 3 - 🔴 Hard (1 - 100) ");
    printf("\n 0 - Exit \n");
    printf("\n Let's choose the level of difficulty: ");
}

void playRound(int maxNum, int level) {
  int userNumber = 0, attempts = 0;
  int randomNumber = rand() % maxNum + 1;

  while (userNumber != randomNumber) {
    printf("\nPlease enter a number from 1 - %d! \n", level);
    scanf("%d", &userNumber);

    if (userNumber > randomNumber) {
      printf("❌Sorry, the number is too high⬆️\n");
      attempts++;
    } else if (userNumber < randomNumber) {
      printf("❌Sorry, the number is too low⬇️\n");
      attempts++;
    } else {
      printf("Correct, you are the SuPeRsTaR!🎉\n");
      printf("🎉 You guessed it in %d attempts!\n", attempts);
      score++;
    }
  }
}
