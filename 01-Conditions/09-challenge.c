#include <stdio.h>
#include <math.h>  // for fmod()

int main()
{
    double number;

    // Input
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Determine Sign
    if (number > 0)
        printf("The number is positive.\n");
    else if (number < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");

    // Determine Type (Integer or Float)
    if (fmod(number, 1.0) == 0)
        printf("The number is an integer.\n");
    else
        printf("The number is a float.\n");

    return 0;
}
