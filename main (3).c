#include <stdio.h>

// Recursive function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! and 1! are both 1
    } else {
        return (unsigned long long)n * factorial(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = factorial(n);
        printf("Factorial of %d is %llu\n", n, result);
    }

    return 0;
}
