#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage;

    printf("=== Student Marks Calculator ===\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter marks of Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    printf("\nTotal Marks: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
