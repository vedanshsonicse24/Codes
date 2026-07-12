#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;  // factorial gets large, use long long

    printf("Enter number to find factorial:\n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %lld", n, fact);
    return 0;
}
