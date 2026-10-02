class Solution {
public:
    vector<string> result;

    void backtrack(string curr, int open, int close, int n) {
        // If we have used all n pairs
        if (curr.length() == 2 * n) {
            result.push_back(curr);
            return;
        }

        // We can add '(' if we still have some left
        if (open < n) {
            backtrack(curr + "(", open + 1, close, n);
        }

        // We can add ')' only if it won't make parentheses invalid
        if (close < open) {
            backtrack(curr + ")", open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n);
        return result;
    }
};