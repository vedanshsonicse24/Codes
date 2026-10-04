class Solution {
public:
    bool checkValidString(string s) {
        int min_open = 0;
        int max_open = 0;
        
        for (char c : s) {
            if (c == '(') {
                min_open++;
                max_open++;
            } else if (c == ')') {
                min_open = max(0, min_open - 1);
                max_open--;
            } else { // c == '*'
                min_open = max(0, min_open - 1);
                max_open++;
            }
            
            if (max_open < 0) {
                return false;
            }
        }
        
        return min_open == 0;
    }
};