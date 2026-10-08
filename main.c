#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Result: %d\n", sumTwo(a, b));

    return 0;
}