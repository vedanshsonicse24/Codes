
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1000000007;
        vector<int> bits(32, 0);

        for (int x : nums) {
            for (int i = 0; i < 32; i++) {
                if (x & (1 << i)) {
                    bits[i]++;
                }
            }
        }

        long long ans = 0;

        for (int j = 0; j < k; j++) {
            long long num = 0;

            for (int i = 31; i >= 0; i--) {
                if (bits[i] > 0) {
                    num |= (1LL << i);
                    bits[i]--;
                }
            }

            ans = (ans + num * num) % MOD;
        }

        return ans;
    }
};
