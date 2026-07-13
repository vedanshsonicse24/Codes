#include <iostream>
#include <climits>

using namespace std ;

int main() {
int array[] = {1, 2, 3, 6};
int n = 4;
int largest= array[0];
int sum=0;

for( int i = 0; i<n; i++){
   largest = max(array[i],largest); 
   sum += array[i];
}
int ans = sum - largest;
if( largest == ans){
    cout<<"true"<<endl;
}
else {
cout<<"false"<<endl;
}
return 0;
}
