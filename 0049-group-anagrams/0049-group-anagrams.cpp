class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> map;
        for(string v:strs){
            string val =v;
            sort(val.begin(),val.end());
            map[val].push_back(v);
        }

        vector<vector<string>>ans;
        for(auto z: map){
            ans.push_back(z.second);
        }
        return ans;
    }
};