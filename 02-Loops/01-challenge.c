#include <stdio.h>

int main()
{
    int number;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
    } while (number < 1);

    for (int i = 1; i <= number; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
