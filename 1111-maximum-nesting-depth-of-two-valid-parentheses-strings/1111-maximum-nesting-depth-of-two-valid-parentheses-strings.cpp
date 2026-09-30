class Solution {
public:
    std::vector<int> maxDepthAfterSplit(std::string seq) {
        std::vector<int> result;
        int depth = 0;
        
        for (char c : seq) {
            if (c == '(') {
                result.push_back(depth % 2);
                depth++;
            } else {
                depth--;
                result.push_back(depth % 2);
            }
        }
        
        return result;
    }
};