#include<stdio.h>
int main(){

    int radius;
    const float PI = 3.14f;
    float area , circumference ;

    printf("Enter the value of radius : ");
    scanf("%d",&radius);
 
    area = PI * radius * radius;
    printf("the area of circle : %.2f\n ",area);

    circumference = 2 * PI * radius;

    printf("the circumference of circle : %.2f", circumference);
    return 0;
}
