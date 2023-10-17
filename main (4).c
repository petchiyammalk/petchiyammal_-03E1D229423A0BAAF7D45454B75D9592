#include <stdio.h>

int main() {
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // Leap year condition
        printf("%d is a leap year.\n", year);
    } else {
        // Non-leap year condition
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
