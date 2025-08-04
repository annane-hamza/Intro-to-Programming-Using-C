#include <stdio.h>

int     main()
{
    char character;

    printf("Enter a character: ");
    scanf(" %c",&character);

    switch(character)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'u':
        case 'U':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
            printf("\'%c\' is a vowel.",character);
            break;
        default:
                printf("\'%c\' is NOT a vowel.",character);
    }

    return 0;
}