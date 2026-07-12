#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number to check for odd/even:\n");
    scanf("%d",&a);
    b=a%2;
    if (b==0)
    {
        printf("%d Is even number",a);
    }
    else
    {
        printf("%d Is odd number",a);
    }

    return 0;

}
// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("Enter number to check for odd/even:\n");
//     scanf("%d", &a);

//     b = a % 2;

//     if (b == 0)
//     {
//         printf("%d is an even number", a);
//     }
//     else
//     {
//         printf("%d is an odd number", a);
//     }

//     return 0;
// }
