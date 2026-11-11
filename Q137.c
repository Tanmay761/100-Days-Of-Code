
#include <stdio.h>

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum UserRole role;
    int choice;

    printf("----- USER ROLES -----\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    role = (enum UserRole)choice;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have standard access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid role selected!\n");
    }

    return 0;
}
