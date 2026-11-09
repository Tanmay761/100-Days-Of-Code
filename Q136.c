
#include <stdio.h>

enum Operations {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int a, b, choice;

    enum Operations op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n--- MENU ---\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    op = (enum Operations)choice;

    switch (op) {
        case ADD:
            printf("Addition = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Subtraction = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Multiplication = %d\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
