#include<stdio.h>
int main() {
int a , b, temp;

printf("Two number for Swap ");
scanf("%d%d",&a,&b);
 temp = a;
 a = b;
 b = temp;

 printf("SWAP Numbers a = %d, b =%d\n",a,b);
return 0;

}