
#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records
    for (i = 1; i <= n; i++) {
        printf("\nEnter details of student %d:\n", i);

        printf("Enter name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n----- Student Records -----\n");
    printf("Name\tRoll No.\tMarks\n");

    // Read and display student records
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("%s\t%d\t\t%.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
