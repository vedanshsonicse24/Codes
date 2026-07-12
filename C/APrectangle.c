#include<stdio.h>
int main() {
  int length, width;
   printf("Enter two value :\n ");
    scanf("%d%d",&length,&width);
printf("Area of rectangle = %d\n",length * width);
printf("Peri of rectangle = %d\n",2* (length * width));
return 0;
}