#include <stdio.h>

float calculateInterest(float principal, float rate, float time) {
  return (principal * rate * time) / 100;
}

int findMax(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }
    else if(b >= a && b >= c){
        return b;
    }else{
        return c;
    }
}
int findMin(int a, int b, int c) {
  if (a <= b && a <= c) {
    return a;
  } else if (b <= a && b <= c) {
    return b;
  } else {
    return c;
  }
}

void sumArr(int arr[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }
    printf("The total is: %d\n", sum);
}

int main(){
    // int a, b, c;
    // printf("Please enter three numbers to find the max value: \n");
    // scanf("%d %d %d", &a, &b, &c);
    // printf("The max value is %d\n", findMax(a, b, c));
    // printf("The min value is %d\n", findMin(a, b, c));
    int arrayModel[] = {1, 2, 3, 4, 5};
    int size = sizeof(arrayModel)/sizeof(arrayModel[0]);
    sumArr(arrayModel, size);
    
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int myFunction(char str[]) {
//   int i = 0, j = strlen(str) - 1;
//   while (i < j) {
//     if (str[i] != str[j]) return 0;
//     i++;
//     j--;
//   }
//   return 1;
// }

// int main() {
//   char word[50];
//   printf("Enter a word: ");
//   scanf("%s", word);

//   if (myFunction(word))
//     printf("%s is a ?????\n", word);
//   else
//     printf("%s is not a ??????\n", word);

//   return 0;
// }