#include<iostream>
using namespace std;

void ReverseArray(int arr[], int sz){
   int start =0, end=sz-1;
   
      while(start<end){
          swap(arr[start],arr[end]);
          start++;
          end--;  
      }
}

int main(){

int arr[] = {12,342,43,443,21};
int sz = 5;

ReverseArray(arr, sz);
    
for(int i=0; i<sz; i++){
        cout<<arr[i]<<" " ;
     }   

return 0;

}