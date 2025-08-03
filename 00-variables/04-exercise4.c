#include <stdio.h>

int main()
{
    char name[30];
    char job[60];
    int age;

    printf("Enter your name: ");
    scanf(" %[^\n]s", name);  // read until newline

    printf("Enter your job: ");
    scanf(" %[^\n]s", job);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n--- User Information ---\n");
    printf("Name: %s\n", name);
    printf("Job : %s\n", job);
    printf("Age : %d\n", age);

    return 0;
}
