
#include<stdio.h>

    int main() {
  int ages[] = {25, 30, 35, 40, 45};
int index;
printf("You have stored this values: \n");
for (int i = 0; i < (sizeof(ages) / sizeof(ages[0])); i++) {
  printf(" %d", ages[i]);
}
printf("\nWhich element do you want to modify? ");
scanf("%d", &index);
for (int i = 0; i < (sizeof(ages) / sizeof(ages[0])); i++) {
  printf("\nPlease enter your number: ");
  scanf("%d", &ages[index - 1]);
}

for (int i = 0; i < (sizeof(ages) / sizeof(ages[0])); i++) {
  printf(" %d", ages[i]);
}
  return 0;
}