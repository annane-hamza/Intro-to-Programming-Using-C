#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        printf("%2d x %2d = %3d\n", number, i, number * i);
    }

    return 0;
}
