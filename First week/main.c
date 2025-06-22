
#include <stdio.h>

int main(){
    int number = 0;

    printf("Please enter a number? \n");
    scanf("%d", &number);
    
    if(number % 2){
        printf("the number is even! ");
    }else{
        printf("The number is odd!");
    }

    return 0;
}