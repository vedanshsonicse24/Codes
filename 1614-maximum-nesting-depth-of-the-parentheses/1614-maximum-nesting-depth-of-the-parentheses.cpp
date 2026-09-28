class Solution {
public:
    int maxDepth(string s) {

       int cursum=0;
       int maxdepth=0;

    for(char c:s){
       if(c=='(') {
       cursum++;
       }
       else if(c==')'){
        cursum--;
       }

       maxdepth = max(maxdepth,cursum);
    }
        return maxdepth;
    }
};