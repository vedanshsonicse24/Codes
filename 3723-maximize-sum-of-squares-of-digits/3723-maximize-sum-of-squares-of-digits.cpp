#include <string>
#include <algorithm>

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) {
            return "";
        }  
            int nines = sum / 9;
          int remainder = sum % 9;
         string res = "";
         
         res.append(nines, '9');
        
        if (remainder > 0) {
             res.push_back('0' + remainder);
          }
        
        int current_length = nines + (remainder > 0 ? 1 : 0);
         int zeros_needed = num - current_length;
        res.append(zeros_needed, '0');
        
        return res;
    }
};