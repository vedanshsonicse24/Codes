class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1,
                               vector<int>& nums2,
                               int k1, int k2) {
        int n = nums1.size();
        long long k = 1LL * k1 + k2;

        vector<long long> diff(n);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            total += diff[i];
        }

        // Enough operations to make all differences zero
        if (k >= total)
            return 0;

        // Find the smallest possible maximum difference
        long long low = 0, high = 0;

        for (long long d : diff)
            high = max(high, d);

        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long need = 0;

            for (long long d : diff) {
                if (d > mid)
                    need += d - mid;
            }

            if (need <= k)
                high = mid;
            else
                low = mid + 1;
        }

        long long level = low;
        long long need = 0;
        long long ans = 0;

        for (long long d : diff) {
            if (d > level) {
                need += d - level;
                d = level;
            }

            ans += d * d;
        }

        // Use remaining operations to reduce level to level - 1
        long long remaining = k - need;

        ans -= remaining * (2 * level - 1);

        return ans;
    }
};