
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0) {
            str[i] = toupper((unsigned char)str[i]);
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}
