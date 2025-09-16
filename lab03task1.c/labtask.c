#include <stdio.h>

int main() {
    int sub1, sub2, sub3, total;
    float percentage;

    // Input marks
    printf("Enter marks for Subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &sub3);

    // Calculate total
    total = sub1 + sub2 + sub3;

    // Calculate percentage (out of 300)
    percentage = (total / 300.0) * 100;

    // Display results
    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
