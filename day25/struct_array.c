#include <stdio.h>

struct Student { int id; char name[20]; float marks; };

int main() {
    struct Student s[2] = {{101, "Alice", 88.5}, {102, "Bob", 91.0}};
    for (int i = 0; i < 2; i++)
        printf("ID: %d | Name: %s | Marks: %.1f\n", s[i].id, s[i].name, s[i].marks);
    return 0;
}
