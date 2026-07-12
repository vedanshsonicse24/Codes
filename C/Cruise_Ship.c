#include<stdio.h>
int main(){
   int x,n; 
   scanf("%d %d",&x,&n);
   int arr[n];
   for(int i=0; i<n;i++){
    scanf("%d",&arr[n]);
   }
for(int i=0; i<n-1;i++){
    for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
        int temp= arr[j];
        arr[j] =arr[j+1];
        arr[j+1] = temp;
      }
   }
}
 int i =0, j=n-1, boat = 0; 
      while(i <= j) {
        if(arr[i] + arr[j] <= x){
            i++;
        j--;
        boat++;
        }
        else{
        j--;
        boat++;
        }
    }
    printf("%d", boat);
    return 0;
}
