#include <iostream>
#include <climits>
using namespace std;

int main() {

    int array[] = {5,3,54,23,65};
    int n = 5;
    int smallest = INT_MAX;

    for(int i=1; i<=n; i++){
        // if(array[i] < smallest ){
        //     smallest = array[i];
       smallest = min(array[i],smallest); // short cut 
        
    }
    cout << "Smallest value : " << smallest  << endl;

    return 0;

}