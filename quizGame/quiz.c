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
struct Questions level1Questions[MAX_QUESTIONS] = {
    {"Q1. How do you declare an integer variable in C?",
     {"A. int x;", "B. integer x;", "C. num x;", "D. var x;"},
     'A'},

    {"Q2. Which symbol ends a statement in C?",
     {"A. :", "B. ;", "C. .", "D. !"},
     'B'},

    {"Q3. Which function is used to display output?",
     {"A. scanf()", "B. echo()", "C. printf()", "D. input()"},
     'C'},

    {"Q4. Which data type holds a single character?",
     {"A. int", "B. float", "C. char", "D. string"},
     'C'},

    {"Q5. Which header file is required for `printf()`?",
     {"A. stdio.h", "B. string.h", "C. math.h", "D. stdlib.h"},
     'A'},

    {"Q6. What is the correct format specifier for integers?",
     {"A. %c", "B. %f", "C. %d", "D. %s"},
     'C'},

    {"Q7. How do you assign value 10 to variable x?",
     {"A. x := 10;", "B. x = 10;", "C. x == 10;", "D. assign x 10;"},
     'B'},

    {"Q8. Which of these is a valid variable name?",
     {"A. 2value", "B. float", "C. _value", "D. int"},
     'C'},

    {"Q9. What is the result of `5 + 3 * 2`?",
     {"A. 16", "B. 11", "C. 13", "D. 10"},
     'B'},

    {"Q10. What is the default return type of main() in C?",
     {"A. void", "B. int", "C. char", "D. string"},
     'B'}};


struct Questions level2Questions[MAX_QUESTIONS] = {
    {"Q1. What does the following statement do?\nif (a == b)",
     {"A. Compares if a is equal to b", "B. Assigns b to a",
      "C. Checks if a is not equal to b", "D. Adds a and b"},
     'A'},

    {"Q2. Which of these is the correct 'not equal' operator in C?",
     {"A. !=", "B. <>", "C. ~=", "D. =!"},
     'A'},

    {"Q3. Which operator represents logical AND in C?",
     {"A. &", "B. &&", "C. |", "D. ||"},
     'B'},

    {"Q4. What will this condition evaluate to: (5 > 2 && 3 < 4)?",
     {"A. false", "B. error", "C. true", "D. undefined"},
     'C'},

    {"Q5. What keyword is used to run code when the `if` condition is false?",
     {"A. else", "B. while", "C. switch", "D. break"},
     'A'},

    {"Q6. Which of these is the OR logical operator?",
     {"A. ||", "B. &&", "C. |", "D. OR"},
     'A'},

    {"Q7. What will be printed?\nint x = 10;\nif (x > 5) printf(\"Hi\");",
     {"A. Hi", "B. Nothing", "C. Error", "D. x"},
     'A'},

    {"Q8. Which block runs only when the condition is false?",
     {"A. if", "B. switch", "C. else", "D. break"},
     'C'},

    {"Q9. Which operator inverts a condition (logical NOT)?",
     {"A. !", "B. &&", "C. ||", "D. ~"},
     'A'},

    {"Q10. What is the result of (3 == 3 || 4 == 5)?",
     {"A. true", "B. false", "C. error", "D. 4"},
     'A'}};

struct Questions loopQuestions[MAX_QUESTIONS] = {
    {"Q1. What does an `if` statement do?",
     {"A. Repeats code", "B. Declares a loop", "C. Makes a decision",
      "D. Prints output"},
     'C'},

    {"Q2. Which of the following is a loop in C?",
     {"A. repeat", "B. foreach", "C. for", "D. loop"},
     'C'},

    {"Q3. What is the output of: `for(int i=0;i<3;i++) printf(\"%d\", i);`?",
     {"A. 123", "B. 012", "C. 0123", "D. 1234"},
     'B'},

    {"Q4. Which loop checks the condition after executing the block once?",
     {"A. for", "B. while", "C. do-while", "D. if"},
     'C'},

    {"Q5. What is the output of: `int i = 1; while(i <= 3){ printf(\"%d\", i); "
     "i++; }`?",
     {"A. 123", "B. 0123", "C. 1234", "D. 012"},
     'A'},

    {"Q6. How many times will this run? `for(int i = 0; i < 5; i++)`",
     {"A. 4", "B. 5", "C. 6", "D. Infinite"},
     'B'},

    {"Q7. What is the use of `break` inside a loop?",
     {"A. Skips iteration", "B. Exits loop", "C. Repeats loop",
      "D. Ends program"},
     'B'},

    {"Q8. What does `continue` do in a loop?",
     {"A. Stops the loop", "B. Skips to next iteration", "C. Ends program",
      "D. Restarts program"},
     'B'},

    {"Q9. Which logical operator is used for AND?",
     {"A. ||", "B. &&", "C. &", "D. !"},
     'B'},

    {"Q10. Which of these loops is guaranteed to execute at least once?",
     {"A. for", "B. while", "C. do-while", "D. foreach"},
     'C'}};

void gameInfo();
void clearScreen();
void startGame(struct Questions quiz[]);
void level();
int choice, score = 0;
char repeat, answer;

int main() {
  clearScreen();
  gameInfo();

  do {
    level();
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        startGame(level1Questions);
        break;
      case 2:
        startGame(level2Questions);
        break;
      case 3:
        startGame(loopQuestions);
        break;
      case 0:
        break;
    }
    printf("\nDo you want to play again? (Y/N): ");
    scanf(" %c", &repeat);  // Ask the user for another drink.

  } while (toupper(repeat) == 'Y');

  return 0;
}

void gameInfo() {
  printf("\n      ***  Welcome  ***");
  printf("\n*** Let's play Quiz Game and help you to learn C! ***\n");
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
  // if(score > 7){
  //   printf("            ,----------------.\n");
  //   printf("           _.--._      ( well done! )\n");
  //   printf("        ,'        `.    `-,--------------'\n");
  //   printf("       /   __) __`  \\ _.-'\n");
  //   printf("      (   (`-`(-')   )\n");
  //   printf("      /)  \\   _  /  (\n");
  //   printf("     /'    )-._.' .  \\ ___\n");
  //   printf("    (  ,--.,    `.)___(___)\n");
  //   printf("     )(   /-.,--'\\   _ \\/`\n");
  //   printf("    '/ .'/        \\ (  Uu\")\\\n");
  //   printf("      / /          \\ `/,-'  )\n");
  //   printf("     ( ^      ,    ,^ )`._.'\n");
  //   printf("      ( `.   Y   .'  )\n");
  //   printf("       \\  `. )\\.'   / )\n");
  //   printf("       )`._.'=='._.' (\n");
  //   printf("      /               )   Ojo/VK/FS/ejm\n");
  //   printf("     (                .\"-.\n");
  //   printf("    /(`    -)        /    \\\n");
  //   printf("   (  \\`-.__    -'_.'      `\n");
  //   printf("   |  \\`-.__.--\"v\"          |\n");
  //   printf("   `.'      \\   |,          ,\n");
  //   printf("    /        `._/           :\n");
  //   printf("   /           |           '\n");
  //   printf("  /           /|          /\n");
  //   printf("             / |         /\n");
  // }
}

void level() {
  printf("\n  Programming with C ");
  printf("\n 1 - 🟢 Easy - 🐣 Level 1: Basics of C Programming");
  printf("\n 2 - 🟡 Medium - ༖ Level 2: Conditions & Logical Operators ");
  printf("\n 3 - 🔴 Hard - 🔁 Loops & Control Structures");
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