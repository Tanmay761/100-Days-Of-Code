#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, start = 0, len;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    // Remove newline character
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    printf("Formatted name: ");

    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            if (i + 1 < len && name[i + 1] != ' ') {
                printf("%c. ", name[start]);
                start = i + 1;
            }
        }
    }

    // Print the surname in full
    printf("%s", &name[start]);

    return 0;
}