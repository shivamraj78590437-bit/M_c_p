#include <stdio.h>

int main() {
    int n, i;
    float marks, total = 0.0, percentage;
    char grade;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter marks of subject %d (out of 100): ", i);
        scanf("%f", &marks);

        if (marks < 0 || marks > 100) {
            printf("Invalid marks! Please enter between 0 and 100.\n");
            return 0;
        }

        total += marks;
    }

    percentage = (total / (n * 100.0)) * 100.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage  = %.2f\n", percentage);
    printf("Grade       = %c\n", grade);

    return 0;
}
