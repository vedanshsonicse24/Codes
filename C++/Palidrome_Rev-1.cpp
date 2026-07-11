#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int dup= x;
    int revNum = 0;

while(x>0){
    int ld= x % 10;
    revNum = (revNum * 10) + ld;
    x=x/10;
}
if( revNum == dup){
    cout<<"true"<<endl;
}else
    cout<<"false"<<endl;
 return 0;
}