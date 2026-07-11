#include<iostream>
using namespace std;

int LinearSearch(int nums[], int sz, int target){

  for(int i=0; i<sz; i++){
 
    if(nums[i]==target){
       return i;
      } 
    } 

   return -1;
}

int main(){

  int nums[] = {152,45,98,45,32,65,45,78};
  int sz = 8;
  int target = 45;

  cout << LinearSearch(nums, sz, target);

  return 0;
}