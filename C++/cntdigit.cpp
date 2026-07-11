#include<iostream>
using namespace std;
int main() {
int x = 145623;
int cnt = 0;
cout<<"Hello"<<endl;
while(x>0){
    x = x / 10;
    cnt = cnt+1;
}
cout <<cnt<<endl;
return 0;
}