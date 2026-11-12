class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;
        int si=1;
        int sd=1;
        int ans=1;
        for(int i=1; i<n;i++){
            if(nums[i]>nums[i-1]){
                si++;
                sd=1;
            }
            else if(nums[i]<nums[i-1]){
                sd++;
                si =1;
            }
            else{
                si=1;
                sd=1;
            }
            ans = max({ans,si,sd});
        }
       
        return ans;
    }
};