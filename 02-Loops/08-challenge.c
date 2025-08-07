#include <stdio.h>

int     main()
{
    int number;
    int count = 0;

    printf("Enter a number: ");
    scanf(" %d",&number);
    int original = number;

    while( number != 0)
    {
        number = number / 10;
        count = count + 1;
    }

    printf("the number of digits in %d is %d \n",original,count);

    return 0;
}