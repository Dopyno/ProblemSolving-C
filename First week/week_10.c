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