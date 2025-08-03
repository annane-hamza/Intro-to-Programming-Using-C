#include <stdio.h>

int     main()
{
    int n1;
    int n2;
    int sum;

    printf("enter the first number: ");
    scanf("%d",&n1);
    printf("enter the second number: ");
    scanf("%d",&n2);

    sum = n1 + n2;

    printf("the sum is: %d\n",sum);

    return 0;
}