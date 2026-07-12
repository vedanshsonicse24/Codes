#include <stdio.h>

int main() {
    int a, b,c;

    printf("Enter the date (ex- DD.MM.YY) : ");
    scanf("%d%d%d",&a, &b, &c);

if( (a >00 && a< 32 )&& (b == 1 ||  b==3 || b== 5 || b ==7 || b ==8 || b == 10 || b == 12 ) &&  (999 < c < 9999))
{
    printf("The date is exist ");
}
 else if ( (0 < a < 30) &&  (b==4 || b== 6 || b ==9 || b ==11 )&&  (999 < c < 9999))
{
    printf("The date is exist ");
}
else if ( (0 < a < 30) &&  (b==2 ) &&  (999 < c < 9999)&& (c %4==0))
{
    printf("[%d/%d/%d] date is exist ",a,b,c);
}
else
{
    printf(" [%d/%d/%d] date is not exist",a,b,c);
}
    return 0;
}