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

struct Questions mediumQuestions[MAX_QUESTIONS] = {
    {"Q1. Who discovered gravity?",
     {"A. Albert Einstein", "B. Isaac Newton", "C. Galileo", "D. Nikola Tesla"},
     'B'},

    {"Q2. What is the largest ocean on Earth?",
     {"A. Atlantic", "B. Indian", "C. Arctic", "D. Pacific"},
     'D'},

    {"Q3. Which element has the chemical symbol 'O'?",
     {"A. Gold", "B. Oxygen", "C. Osmium", "D. Opal"},
     'B'},

    {"Q4. How many bones are in the adult human body?",
     {"A. 206", "B. 210", "C. 220", "D. 198"},
     'A'},

    {"Q5. Which country hosted the 2016 Summer Olympics?",
     {"A. China", "B. Brazil", "C. UK", "D. Russia"},
     'B'},

    {"Q6. Who invented the lightbulb?",
     {"A. Alexander Graham Bell", "B. Thomas Edison", "C. Nikola Tesla",
      "D. James Watt"},
     'B'},

    {"Q7. What is the square root of 64?",
     {"A. 6", "B. 7", "C. 8", "D. 9"},
     'C'},

    {"Q8. Which continent is the Sahara Desert located in?",
     {"A. Asia", "B. North America", "C. Africa", "D. Australia"},
     'C'},

    {"Q9. What is the freezing point of water in Celsius?",
     {"A. 0°C", "B. 32°C", "C. -1°C", "D. 100°C"},
     'A'},

    {"Q10. What is the main language spoken in Brazil?",
     {"A. Spanish", "B. Portuguese", "C. French", "D. English"},
     'B'}};

struct Questions hardQuestions[MAX_QUESTIONS] = {
    {"Q1. What is the smallest prime number?",
     {"A. 0", "B. 1", "C. 2", "D. 3"},
     'C'},

    {"Q2. What is the currency of South Korea?",
     {"A. Yen", "B. Won", "C. Ringgit", "D. Yuan"},
     'B'},

    {"Q3. What gas do plants absorb from the atmosphere?",
     {"A. Oxygen", "B. Hydrogen", "C. Nitrogen", "D. Carbon Dioxide"},
     'D'},

    {"Q4. Who developed the theory of relativity?",
     {"A. Newton", "B. Tesla", "C. Galileo", "D. Einstein"},
     'D'},

    {"Q5. What is the largest internal organ in the human body?",
     {"A. Heart", "B. Liver", "C. Lungs", "D. Brain"},
     'B'},

    {"Q6. What is the hexadecimal equivalent of the decimal number 15?",
     {"A. D", "B. F", "C. E", "D. C"},
     'B'},

    {"Q7. What is the chemical formula for table salt?",
     {"A. H2O", "B. CO2", "C. NaCl", "D. KCl"},
     'C'},

    {"Q8. Who painted The Starry Night?",
     {"A. da Vinci", "B. Van Gogh", "C. Picasso", "D. Monet"},
     'B'},

    {"Q9. Which year did World War II end?",
     {"A. 1943", "B. 1944", "C. 1945", "D. 1946"},
     'C'},

    {"Q10. Which is the longest river in the world?",
     {"A. Amazon", "B. Yangtze", "C. Nile", "D. Mississippi"},
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
        startGame(quiz);
        break;
      case 2:
        startGame(mediumQuestions);
        break;
      case 3:
        startGame(hardQuestions);
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
  printf("\n 1 - 🟢 Easy - Programming with C ");
  printf("\n 2 - 🟡 Medium - General Questions ");
  printf("\n 3 - 🔴 Hard - General Questions");
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