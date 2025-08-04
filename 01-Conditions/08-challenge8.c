#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    char password[20];

    printf("=======================================\n");
    printf("=                                     =\n");
    printf("=                                     =\n");
    printf("=       Welcome To Login System       =\n");
    printf("=   Use your username / password      =\n");
    printf("=                                     =\n");
    printf("=                                     =\n");
    printf("=======================================\n");

    // Get user input
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    // Validate credentials
    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0)
    {
        printf("===============================================\n");
        printf("=                                             =\n");
        printf("=           ACCESS GRANTED SUCCESSFULLY       =\n");
        printf("=         Welcome to the Admin Panel          =\n");
        printf("=                                             =\n");
        printf("=------------------- MENU -------------------=\n");
        printf("=                                             =\n");
        printf("=     [1] Add User                            =\n");
        printf("=     [2] Edit User                           =\n");
        printf("=     [3] Remove User                         =\n");
        printf("=     [4] Search User                         =\n");
        printf("=     [0] Exit                                =\n");
        printf("=                                             =\n");
        printf("===============================================\n");
    }
    else
    {
        printf("===============================================\n");
        printf("=                                             =\n");
        printf("=     X  Access Denied: Invalid Login!        =\n");
        printf("=                                             =\n");
        printf("=     X Unauthorized access attempt detected  =\n");
        printf("=                                             =\n");
        printf("=     If you are a hacker, turn back now!     =\n");
        printf("=     Your actions are being monitored.       =\n");
        printf("=                                             =\n");
        printf("===============================================\n");
    }

    return 0;
}
