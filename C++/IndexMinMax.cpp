#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int size = 6;
    int nums[size] = {32,343,54,23,155,54};
    int Index =0;
    int Largest = INT_MIN;
   
   for(int i=0; i<size; i++){
      if(nums[i] > Largest){
         Largest = nums[i], Index=i+1;
     }
   }
   
        cout << Index <<endl;
return 0;
}