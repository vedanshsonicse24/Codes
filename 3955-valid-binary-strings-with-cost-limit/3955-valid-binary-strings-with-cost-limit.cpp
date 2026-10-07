class Solution {
public:
    vector<string> arr;

    void solve(int index, int n, int k, int cost, bool prev, string& s){
        if(cost >k) return;
        if(index == n){
            arr.push_back(s);
            return;
        }

        s.push_back('0');
        solve(index+1,n,k,cost,false,s);
        s.pop_back();

        if(prev==0){
            s.push_back('1');
            solve(index+1,n,k,cost+index,true,s);
            s.pop_back();
        }
    }

    vector<string> generateValidStrings(int n, int k){
        string currString;
        solve(0,n,k,0,false,currString);
        return arr;
    }

};