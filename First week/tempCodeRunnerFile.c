const int ticket = 4;

    int a = 0;
    system("clear");
    printf("Please enter you age: \t");
    scanf("%d", &a);

    if (a <= 4)
    {
        printf("Passengers under 4 are considered infants and travel for free.");
    }
    else if (a > 5 && a <= 16)
    {
        int result = 4 / 2;
        printf("Passengers under 16 can buy a child ticket which is half price.");
        printf("\nThe price is £%d", result);
    }
    else if (a >= 65)
    {
        float result = 4 / 3;
        printf("Passengers who are 65 or older are considered pensioners and pay one third of the price. ");
        printf("\nThe price is £%.2f", result);
    }
    else
    {
        printf("The normal ticket price is £4. ");
    }