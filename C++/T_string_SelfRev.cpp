#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
   getline(cin,str);
    size_t pos = str.find(" ");
    if(pos != string::npos){
        string first = str.substr(0,pos);
        string second = str.substr(pos+1);
         reverse(first.begin(), first.end());
         cout<<first;
         reverse(second.begin(), second.end());
        cout<<" "<<second; 
    } 
  return 0;
}