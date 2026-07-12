#include<stdio.h>
int main(){
  
int a;    
printf("Enter the Number :\n");
scanf("%d",&a);


if(a%5==0 && a%11==0)
{
    printf("It is divisble by 5 and 11 ");
}
else if (a%11 == 0 )
{
    printf("It is divisble by 11");
}
else if (a%5 ==0)
{
 printf("It is divisble by 5");
}
else
{
    printf("It is not divisble by 5 or 11");
}
    return 0;
}