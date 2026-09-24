#include <stdio.h>

struct DataStruct {
    int i;
    float f;
    char str[20];
};

union DataUnion {
    int i;
    float f;
    char str[20];
};

int main() {
    struct DataStruct s;
    union DataUnion u;

    printf("--- Day 37: Union vs Structure Memory ---\n");
    printf("Size of struct DataStruct: %lu bytes\n", sizeof(s));
    printf("Size of union DataUnion:   %lu bytes\n", sizeof(u));

    u.i = 100;
    printf("\nu.i = %d\n", u.i);

    u.f = 220.5;
    printf("u.f = %.2f\n", u.f);
    printf("u.i after assigning u.f (shared memory): %d\n", u.i);

    return 0;
}
