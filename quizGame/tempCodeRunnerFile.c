  printf("\n*** Let's play Quiz Game and help you to learn C! ***\n");
}

void startGame(struct Questions quiz[]) {
  char answer;

  for (int i = 0; i < MAX_QUESTIONS; i++) {
    printf("\nQuestions nr: %d\n\n", i + 1);
    printf("%s\n", quiz[i].questionText);
    for (int j = 0; j < 4; j++) {