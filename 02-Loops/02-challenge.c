#include <stdio.h>

int     main()
{
    int number;

    do
    {
        printf("Enter a positive number: ");
        scanf(" %d",&number);

    } while (number < 1);

    for (int i = 1 ; i <= number ; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d ",i);
        }
    }
     printf("\n");

     return 0;
}