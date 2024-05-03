#include <stdio.h>
#include<string.h>

// Inner structure
struct Date {
    int day;
    int month;
    int year;
};

// Outer structure containing the inner structure
struct Employee {
    int empId;
    char name[50];
    struct Date dob; // Nested structure
};

int main() {
    // Define an employee struct variable
    struct Employee emp1;

    // Assign values to the nested structure members
    emp1.dob.day = 10;
    emp1.dob.month = 5;
    emp1.dob.year = 1990;

    // Assign values to other members of the outer structure
    emp1.empId = 1001;  
    strcpy(emp1.name,"John");

    // Print employee details
    printf("Employee ID: %d\n", emp1.empId);
    printf("Name: %s\n", emp1.name);
    printf("Date of Birth: %d-%d-%d\n", emp1.dob.day, emp1.dob.month, emp1.dob.year);

    return 0;
}
