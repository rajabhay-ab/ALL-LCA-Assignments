#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("\nBefore Swapping:\n");
    printf("First number=%d, Second number=%d\n", x, y);

    swap(&x, &y);

    printf("\nAfter Swapping:\n");
    printf("First number=%d, Second number=%d\n", x, y);

    return 0;
}