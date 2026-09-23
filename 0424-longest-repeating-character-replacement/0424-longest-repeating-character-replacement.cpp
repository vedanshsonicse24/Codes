class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char, int> mp;

        int l=0;
        int ans =0;
        int mf=0; 

        for(int rt=0; rt<s.size(); rt++){

            mp[s[rt]]++;

            mf=max(mf,mp[s[rt]]);

            while((rt-l+1)-mf>k){
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,rt-l+1);
        }
        return ans;
    }
};