#include<stdio.h>

int main(){
    int values[] = {10, 20, 30, 40, 50, 60};

    int total = 0;
    for(int i = 0; i < 6; i++){
        printf("Value %d: %d\n", i + 1, values[i]);
        total += values[i];
    }

    printf("\nThe total value is: %d\n", total);

    printf("Which value do you want to change? (1 - 6)");
    scanf("%d", )
    return 0;
}