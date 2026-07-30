class Solution {
public:
    int minimumPushes(string word) {
        int minCost =0;  
        
        for(int i = 0; i < word.size(); i++) {
            minCost += (i / 8) + 1;
        }
        return minCost;
    }
};