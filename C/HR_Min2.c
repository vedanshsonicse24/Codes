#include<stdio.h>
int main() {
int Option, value,c;
printf("press 1 = Hr to Min And Press 2 = Min to Hr\n2");
scanf("%d",&Option);
printf("enter value");
scanf("%d",&value);
if(Option =1 )
{
 c = value*60;
 printf("Hr to Min %d",c);
}
else if(Option = 2)
{
 c = value/60;
 printf("Min to Hr %d",c);
}
else
{
    printf("INVALID OUTPUT");
}
return 0;
}