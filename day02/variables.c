#include <stdio.h>

int main() {
    // Variable declarations and initialization
    int age = 19;
    float cgpa = 8.75f;
    double pi = 3.1415926535;
    char grade = 'A';

    // Printing variables using format specifiers
    printf("--- Day 2: Variables & Data Types ---\n");
    printf("Integer (age): %d\n", age);
    printf("Float (cgpa): %.2f\n", cgpa);
    printf("Double (pi): %.6lf\n", pi);
    printf("Character (grade): %c\n", grade);

    // Basic arithmetic operation
    int next_year_age = age + 1;
    printf("Next year age will be: %d\n", next_year_age);

    return 0;
}
