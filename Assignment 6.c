#include <stdio.h>

/* Factorial without recursion (using a loop) */
unsigned long long factWithoutRecursion(int n) {
    unsigned long long result = 1;
    int i;
    for (i = 1; i <= n; i++)
        result = result * i;
    return result;
}

/* Factorial with recursion (function calls itself) */
unsigned long long factWithRecursion(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factWithRecursion(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    printf("Factorial of number (without recursion) = %llu\n", factWithoutRecursion(num));
    printf("Factorial of number (with recursion)    = %llu\n", factWithRecursion(num));

    return 0;
}

