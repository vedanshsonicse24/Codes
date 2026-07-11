/*
----SIMPLE ONE----

#include <iostream>
using namespace std;
int main()
{
    int size = 4;
    int arr[size] = {12,23,54,76};
    int target = 76;

    for( int i=0; i<size; i++){
       if(arr[i]==target){
         cout << i<<endl;
        return 0;
        } 
       }     
}
       */


#include <iostream>
using namespace std;

//----CREATING A FUNCTION------ 

int LinearSearch(int arr[],int sz,int target){
    for(int i=0; i<sz; i++){
    if(arr[i]==target) {
        return i;
    }
}
return -1; 
}


int main()
{
    int sz= 5;
    int arr[] = {12,54,78,32,21};
    int target = 78;
    cout<< LinearSearch( arr, sz, target);
return 0;
}
