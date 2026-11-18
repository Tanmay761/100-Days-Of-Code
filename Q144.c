#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

// Function accepting structure as parameter
void display(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%49s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Passing structure to function
    display(s);

    return 0;
}