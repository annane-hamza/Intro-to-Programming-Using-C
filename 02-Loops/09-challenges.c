#include <stdio.h>

int     main()
{ 
    int number;
    int sum = 0;

    printf("Enter a number: ");
    scanf(" %d",&number);

    while (number != 0)
    {
        sum = sum + (number % 10) ;
        number = number / 10 ;
    }

    printf("Sum of digits is %d \n",sum);

    return 0;
}