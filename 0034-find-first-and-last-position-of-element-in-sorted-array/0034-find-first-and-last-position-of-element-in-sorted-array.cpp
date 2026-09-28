class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
       auto z = lower_bound(nums.begin(), nums.end(), target);
       auto r = upper_bound(nums.begin(), nums.end(), target);

       if(z==r) return {-1,-1};
       int ans1 =z-nums.begin(); 
       int ans2 = r-nums.begin();
       return{ans1,ans2-1};
        }
    
};