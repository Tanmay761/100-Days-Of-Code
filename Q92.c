#include <stdio.h>

int main() {
    char str[100];
    int i, freq[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("First repeating character: %c", str[i]);
                return 0;
            }
            freq[str[i] - 'a']++;
        }
    }

    printf("No repeating lowercase alphabet found.");

    return 0;
}