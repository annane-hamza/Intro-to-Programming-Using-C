#include <stdio.h>

int main()
{
    int n;
    printf("Enter N: ");
    scanf(" %d", &n);

    if (n <= 0) {
        printf("Fibonacci: (no numbers)\n");
        return 0;
    }

    int n1 = 0, n2 = 1, next;

    if (n == 1) {
        printf("Fibonacci: %d\n", n1);
        return 0;
    }

    printf("Fibonacci: %d %d", n1, n2);

    for (int i = 2; i < n; ++i) {
        next = n1 + n2;
        printf(" %d", next);
        n1 = n2;
        n2 = next;
    }

    printf("\n");
    return 0;
}
