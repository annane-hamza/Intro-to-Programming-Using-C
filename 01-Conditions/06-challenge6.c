#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Input angles
    printf("Enter three angles: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check validity
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        printf("Valid triangle.\n");
    } else {
        printf("Invalid triangle.\n");
    }

    return 0;
}
