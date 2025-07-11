#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char question[][80] = {
    "Q1: What is the correct syntax to output 'Hello World!' in C?\n",
    "Q2: What is the capital of France?\n",
    "Q3: What planet is known as the Red Planet?\n",
    "Q4: Which of the following is a loop in C?\n",
    "Q5: What is the square root of 81?\n",
    "Q6: Who was the first President of the United States?\n",
    "Q7: What does RAM stand for?\n",
    "Q8: Which header file is required to use printf()?\n",
    "Q9: Which is the largest ocean on Earth?\n",
    "Q10: What color do you get by mixing red and blue?\n"};
char correctAnswer[][256] = {
    "\nA. echo(\" Hello, World\");\nB.printf(\"Hello, World\");\nC.cout "
    "<<\"Hello, World\";\nD.print(\"Hello, World\")\n",
};

void gameInfo();
void startTheGame(char arr);
void clearScreen();

int main() {
    char answ;
  clearScreen();
  gameInfo();
  printf("\nEnter your answer (A/B/C/D): ");
  sscanf(" %c", &answ);
  startTheGame(answ);

  return 0;
}

void gameInfo() {
  printf("\n      ***  Welcome  ***\n");
  printf("\n*** Let's play Quiz Game! ***\n");
}
void startTheGame(char arr) {
  for (int i = 0; i <= sizeof(question) / sizeof(question[0]); i++) {
    printf("%s", question[i]);
    if (strcmp(arr, correctAnswer) == 0)
    {
      printf("✅ Correct: B\n");
    }else{
        printf("❌Wrong answer!!!!");
    }
    
  }
}
void clearScreen() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}