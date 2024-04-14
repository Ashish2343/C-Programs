#include <stdio.h>
int main() {
    int weekdayNumber;
    printf("Enter weekday number (1 for Sunday, 2 for Monday, and so on): ");
    scanf("%d", &weekdayNumber);

    switch (weekdayNumber) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid weekday number.\n");
            break;
    }
    return 0;
}