#include <stdio.h>

int main() {

    int age;
    float note;
    char name[50];

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter note: ");
    scanf("%f", &note);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("note: %f\n", note);

    return 0;
}
