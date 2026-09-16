class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0){
            return false;
        }

            int ognum = x;
            long long num2 =0;
        while(x>0){
            int lastdigit = x % 10;
            num2 = (num2*10)+ lastdigit;
            x/= 10;
        }

        return ognum== num2;
    }
};