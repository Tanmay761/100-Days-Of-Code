#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

// Function to return the student with highest marks
struct Student findTopper(struct Student s[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main() {
    struct Student s[5], topper;
    int i;

    // Input student details
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%49s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Receive returned structure
    topper = findTopper(s, 5);

    // Display topper details
    printf("\n----- Top Student Details -----\n");
    printf("Roll Number: %d\n", topper.roll);
    printf("Name: %s\n", topper.name);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}