#include <stdio.h>

float calculateInterest(float principal, float rate, float time) {
  return (principal * rate * time) / 100;
}

int main(){


    float nr = calculateInterest(200,1.5, 2);
    printf("%.2f", nr);
    return 0;
}