#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUESTIONS 10

struct Questions {
  char questionText[200];
  char questionOption[4][100];
  char correctOption;
};
struct Questions quiz[MAX_QUESTIONS] = {
    {"Q1: What is the correct syntax to output \" Hello, World \" in C?",
     {"A. echo(\" Hello, World \");", "B.printf(\"Hello, World\");",
      "C.cout << \"Hello, World\";", "D.print(\"Hello, World\") "},
     'B'},
    {"Q2. Which header file is required for printf()?",
     {"A. stdlib.h", "B. conio.h", "C. stdio.h", "D. string.h"},
     'C'},
    {"Q3. How do you declare an integer variable in C?",
     {"A. int num;", "B. num int;", "C. integer num;", "D. num = int;"},
     'A'},
    {"Q4. What is the correct operator for comparison in C?",
     {"A. =", "B. ==", "C. !=", "D. =>"},
     'B'},

    {"Q5. Which data type is used to store a single character?",
     {"A. string", "B. char", "C. int", "D. float"},
     'B'},

    {"Q6. What is the default return type of `main()` in C?",
     {"A. void", "B. int", "C. char", "D. float"},
     'B'},

    {"Q7. Which of the following is a loop structure in C?",
     {"A. repeat-until", "B. foreach", "C. while", "D. loop"},
     'C'},

    {"Q8. What is the purpose of `#include <stdio.h>`?",
     {"A. To define variables", "B. To use standard input/output functions",
      "C. To perform math operations", "D. To include custom headers"},
     'B'},

    {"Q9. What will `5 / 2` evaluate to in C?",
     {"A. 2.5", "B. 3", "C. 2", "D. Error"},
     'C'},

    {"Q10. Which symbol is used to denote a comment in C?",
     {"A. //", "B. <!-- -->", "C. ##", "D. **"},
     'A'}};

void gameInfo();
void clearScreen();
void startGame(struct Questions quiz[]);
void level();
int choice, score = 0;
char repeat, answer;

int main() {
  gameInfo();

  do {
    level();
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        startGame(quiz);
        break;
      case 2:

        break;
      case 3:

        break;

      case 0:
        break;

        printf("\nDo you want to play again? (Y/N): ");
        scanf(" %c", &repeat);  // Ask the user for another drink.
    }

  } while (toupper(repeat) == 'Y');

    return 0;
}
  void gameInfo() {
    printf("\n      ***  Welcome  ***");
    printf("\n*** Let's play Quiz Game! ***\n");
  }

  void startGame(struct Questions quiz[]) {
    char answer;

    for (int i = 0; i < MAX_QUESTIONS; i++) {
      printf("\nQuestions nr: %d\n\n", i + 1);
      printf("%s\n", quiz[i].questionText);
      for (int j = 0; j < 4; j++) {
        printf("%s\n", quiz[i].questionOption[j]);
      }
      printf("\nEnter your answer (A/B/C/D): ");
      scanf(" %c", &answer);
      if (toupper(answer) == quiz[i].correctOption) {
        printf("✅Correct answer!\n");
        score++;
      } else {
        printf("❌Sorry wrong answer!\n");
      }
    }
    printf("\nYour total score is: %d\n", score);
  }

  void level() {
    printf("\n 1 - 🟢 Easy Programming with C ");
    printf("\n 2 - 🟡 Medium (1 - 50) ");
    printf("\n 3 - 🔴 Hard (1 - 100) ");
    printf("\n 0 - Exit \n");
    printf("\n Let's choose the level of difficulty: ");
  }

  void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
  }