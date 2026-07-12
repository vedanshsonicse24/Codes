#include<stdio.h>
int main() {
int c=0,sum=0,X, n=3, x;
printf("Enter total no. of foods purchased\t");
scanf("%d",&X);
int price[n];
for(int i=0; i<n;i++){
    printf("The price of %d fruits ",i+1);
    scanf("%d",&price[i]); 
}
for(int i=0; i<n-1;i++){
    for(int j=0; j<n-1;j++){
        if(price[j]>price[j+1]){
            int temp = price[j];
            price[j] = price[j+1];
            price[j+1] = temp;
        }
    }
}
//mei chahhta hu ki koi bhi 2 integer mei 1 integer do baar print ho and another integer 1 baar
while(c!=x-1){
    sum+=price[0];
    c++;
}
sum+= price[1];
printf("Minimum Cost : %d",sum);
return 0;
}
