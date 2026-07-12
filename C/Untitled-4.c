#include<stdio.h>
int main() {

int arr[5];

printf("Enter 5 Integer value :");

for(int i=0;i<5;i++){
printf("Enter Integer %d:",i+1);
scanf("%d",&arr[i]);
}
 printf("Your index no.");
for(int i=0;i<5;i++){
printf(" Your index %d : %d\n",i+1 ,arr[i]);
}
return 0;
}