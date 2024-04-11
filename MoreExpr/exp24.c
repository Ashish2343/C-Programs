#include <stdio.h>
struct Student {
    char name[50];
    int id;
    float marks;
};
int main() {
    struct Student student;
    struct Student *ptr;
    ptr = &student;
    printf("Enter student name: ");
    scanf("%s", &ptr->name);
    printf("Enter student ID: ");
    scanf("%d", &ptr->id);
    printf("Enter student marks: ");
    scanf("%f", &ptr->marks);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}