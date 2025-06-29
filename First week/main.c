
#include <stdio.h>
#include <stdlib.h>

//void calcAge(int a);

int main()
{
    // int age = 0;

    // printf("Please enter your age: \t");
    // scanf("%d", &age);

    // if (age < 8)
    // {
    //     printf("Wow, people start using computers early!");
    // }
    // else if (age == 18)
    // {
    //     printf("Hey! We are the same age!");
    // }
    // else
    // {
    //     printf("Perfect to start coding!\n");

    // }

    // int firstNun = 0;
    // int secondNum = 0;

    // printf("Choose two numbers, one for the day and one for the month!\n\n");

    // printf("Please enter your first number for the day: \t");
    // scanf("%d", &firstNun);

    // printf("Please enter your second numberfor the month: \t");
    // scanf("%d", &secondNum);

    // if (firstNun == 1 && secondNum == 4)
    //     printf("It is April fools day");

    // const int ticket = 4;

    // int a = 0;
    // system("clear");
    // printf("Please enter you age: \t");
    // scanf("%d", &a);

    // if (a <= 4)
    // {
    //     printf("Passengers under 4 are considered infants and travel for free.");
    // }
    // else if (a >= 5 && a <= 16)
    // {
    //     int result = ticket / 2;
    //     printf("Passengers under 16 can buy a child ticket which is half price.");
    //     printf("\nThe price is £%d", result);
    // }
    // else if (a >= 65)
    // {
    //     float result = ticket / 3;
    //     printf("Passengers who are 65 or older are considered pensioners and pay one third of the price. ");
    //     printf("\nThe price is £%.2f", result);
    // }
    // else
    // {
    //     printf("The normal ticket price is £4. ");
    // }

    char name[100];

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);

    printf("%s", name);


    return 0;
}
