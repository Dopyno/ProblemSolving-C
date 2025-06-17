#include<stdio.h>
#include<string.h>

#pragma region function prototype
#define MAX_USERS 10  //* Maximum number of users
struct User           //*Structure to represent a user
{
    int age;
    char firstName[10];
    char lastName[10];
    char email[25];
    int account;
};
void greetingMsg();
void saluteUser();
void getUserDetail(struct User *u);
void printUsers(struct User user);
int optionStartMenu();
#pragma endregion

int main(){

struct User users[MAX_USERS];
int answer, n;

greetingMsg();

do{
int answer = optionStartMenu();
switch (answer)
{
case 1:
    /* code */
    break;

case 2:

    break;
}

} while (answer != 0);{}


// for(int i = 0; i < n; i++){
// getUserDetail(&users[i]);
// };

// printf("\n------User Details------\n");
// for(int i = 0; i < n; i++){
//     printUsers(users[i]);
//     };
saluteUser();
    return 0;
}

#pragma region function 
void greetingMsg(){
    printf("**************<<<<<<<<<<<<<<<>>>>>>>>>>>>>>*****************\n");
    printf("**********          Welcome to Silver Bank!!        *********\n");
    printf("**************<<<<<<<<<<<<<<<>>>>>>>>>>>>>>*****************\n\n\n");   
}

void getUserDetail(struct User *u){
   printf("Please enter your age: ");
    scanf("%d", &u->age);
    if(u->age > 18){
        printf("Please enter your first name: ");
        scanf("%s", u->firstName);
        printf("Please enter your last name: ");
        scanf("%s", u->lastName);
        printf("Please enter your email address: ");
        scanf("%s", u->email);
        printf("Please enter the amount you want to deposit today in £: ");
        scanf("%d", &u->account);
    }else{
        printf("Sorry, you are to young at this time to open an account!\nYou must wait till turn 18 years old!\n\n\n");
    }
}

int optionStartMenu(){
    int n;
    printf("Please choose one of the following option or press '0' to exit! \n");
    printf("1.\t🏦Open acount.\n");
    printf("2.\t💷My account.\n");
    printf("0.\tExit.🚀\n");
    printf("Enter your selection: ");
    scanf("%d", &n);
    return n;
}

void printUsers(struct User user){
printf("Full name: %s %s\n", user.firstName, user.lastName);
printf("Email: %s\n", user.email);
printf("Today you have an account of £%d.\n", user.account);
}
void saluteUser(){
    printf("\nThank you for choosing Silver Bank today!\n");
}
#pragma endregion