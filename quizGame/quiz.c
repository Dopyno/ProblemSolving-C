#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUESTIONS 10

struct Questions {
  char questionText[200];
  char questionOption[4][100];
  char correctOption[50];
};

void gameInfo();
void clearScreen();

int main() {
  char answer;
  clearScreen();
  gameInfo();
  printf("\nEnter your answer (A/B/C/D): ");
  sscanf(" %c", &answer);

  return 0;
}

void gameInfo() {
  printf("\n      ***  Welcome  ***\n");
  printf("\n*** Let's play Quiz Game! ***\n");
}

void startGame(char answer, struct Questions quiz) {
  for (int i = 0; i < MAX_QUESTIONS; i++) {
    printf("Questions nr: %d", i + 1);
    printf("%s", );
  }
}

void defineQuestions() {
  struct Questions quiz[MAX_QUESTIONS] = {
      {"Q1: What is the correct syntax to output \" Hello, World \" in C?",
       {"A. echo(\" Hello, World \");", "B.printf(\"Hello, World\");",
        "C.cout << \"Hello, World\";", "D.print(\"Hello, World\") "},
       "✅ Correct: B  -  printf(\" Hello, World \");"}};
}

void clearScreen() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}