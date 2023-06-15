#include <stdio.h>
#include <string.h>

// Below is the code to create a typedef 

//typedef char user[25];

// typedef is also used a lot with structs

// Below is an example where struct isn't used with typedef
struct User
{
    char name[25];
    char password[12];
    int id;
};

// Below is an example where struct is used with typedef

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;


int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    // Below is a more tedious method
    //char user1[25] = "Aidan";

    // If we use a typedef then we can instead just type out the below
    //user user1[25] = "Aidan";

    // Below is the code that uses the struct without typedef
    //struct User user1 = {"Aidan", "password123", 123456789};
    //struct User user2 = {"AI", "password321", 987654321};

    // Below is the code that uses the struct with typedef
    User user1 = {"Aidan", "password123", 123456789};
    User user2 = {"AI", "password321", 987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}