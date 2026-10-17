class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n= nums.size();
        auto sum = [](int x){
            int s=0;
            while(x) s += x % 10, x /= 10;
            return s;
        };
        vector<pair<int,int>> arr(n);
        for(int i =0;i<n;++i) arr[i] ={nums[i],i};
        sort(arr.begin(),arr.end(),[&](auto& a,auto& b){
            int sa = sum(a.first), sb = sum(b.first);
            return sa != sb ? sa<sb: a.first <b.first;
        });
        vector<bool> vis(n);
        int ans =0;
        for(int i =0;i<n;++i){
            if(vis[i]|| arr[i].second ==i) continue;
            int len =0,curr =i;
            while(!vis[curr]){
                vis[curr] = true;
                curr = arr[curr].second;
                len++;
            }
            ans += len -1;
        }
        return ans;
    }
};