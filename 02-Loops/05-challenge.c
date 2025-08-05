#include <stdio.h>

int main()
{
    int number;
    int count = 1;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    while (count <= number)
    {
        factorial *= count;
        count++;
    }

    printf("Factorial = %d\n", factorial);
    return 0;
}
