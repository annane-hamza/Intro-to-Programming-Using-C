#include <stdio.h>

int main()
{
    int number, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    int original = number;

    while (number != 0)
    {
        rev = rev * 10 + number % 10;
        number = number / 10;
    }

    if (original == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}