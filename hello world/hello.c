#include<stdio.h>
#include<string.h>

#define MAX_USERS 10  //* Maximum number of users
struct User           //*Structure to represent a user
{
    char firstName[10];
    char lastName[10];
    int age;
    char email[25];
    int account;
};
void greetingMsg();
void saluteUser();
void getUserDetail(struct User *u);

int main(){
struct User users[MAX_USERS];
int n;

greetingMsg();

printf("How many users do you want to add today? \n");
scanf("%d", &n);
for(int i = 0; i < n; i++){
getUserDetail(&users[i]);
};

saluteUser();
    return 0;
}

void greetingMsg(){
    printf("**************<<<<<<<<<<<<<<<>>>>>>>>>>>>>>*****************\n");
    printf("**********          Welcome to Silver Bank!!        *********\n");
    printf("**************<<<<<<<<<<<<<<<>>>>>>>>>>>>>>*****************\n\n\n");   
}

void getUserDetail(struct User *u){
   printf("Please enter your age: ");
    scanf("%d", &u->age);
    if(&u->age > 18){
        printf("Please enter your first name: ");
        scanf("%s", u->firstName);
        printf("Please enter your last name: ");
        scanf("%s", u->lastName);
        printf("Please enter your email address: ");
        scanf("%s", u->email);
        printf("Please enter the amount you want to deposit today in £: ");
        scanf("%d", &u->account);
    }else{
        printf("Sorry, you are to young at this time to open an account!\nYou must wait till turn 18 years old!");
    }
}

void printUsers(struct User user){
printf("Full name: %s %s\n", user.firstName, user.lastName);
printf("Email: %s\n", user.email);
printf("Today you have an account of £%d.", user.account);
}
void saluteUser(){
    printf("Thank you for choosing Silver Bank today!");
}

