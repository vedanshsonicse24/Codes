#include <iostream>
#include <climits>
using namespace std ;

int main() {

int array[] = { 12,43,21,65,23};
int n = 5;


for( int i = 1; i<=n; i++){
   largest = max(array[i],largest); 

}
cout << "Largest : "<< largest << endl;
return 0;
}