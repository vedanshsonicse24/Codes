#include <vector>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();
        
    
        vector<long long> window_cost(n - x + 1, 0);
        
        multiset<long long> left_half, right_half;
        long long left_sum = 0, right_sum = 0;

        auto balance = [&]() {
            while (left_half.size() > right_half.size() + 1) {
                long long val = *left_half.rbegin();
                left_half.erase(--left_half.end());
                left_sum -= val;
                right_half.insert(val);
                right_sum += val;
            }
            while (right_half.size() > left_half.size()) {
                long long val = *right_half.begin();
                right_half.erase(right_half.begin());
                right_sum -= val;
                left_half.insert(val);
                left_sum += val;
            }
        };

        auto add = [&](long long val) {
            if (left_half.empty() || val <= *left_half.rbegin()) {
                left_half.insert(val);
                left_sum += val;
            } else {
                right_half.insert(val);
                right_sum += val;
            }
            balance();
        };

        auto remove = [&](long long val) {
            if (left_half.find(val) != left_half.end()) {
                left_half.erase(left_half.find(val));
                left_sum -= val;
            } else {
                right_half.erase(right_half.find(val));
                right_sum -= val;
            }
            balance();
        };

        auto get_cost = [&]() {
            long long median = *left_half.rbegin();
            long long count_left = left_half.size();
            long long count_right = right_half.size();
            return (median * count_left - left_sum) + (right_sum - median * count_right);
        };

        // Initialize first window
        for (int i = 0; i < x; ++i) {
            add(nums[i]);
        }
        window_cost[0] = get_cost();

        // Slide the window
        for (int i = x; i < n; ++i) {
            add(nums[i]);
            remove(nums[i - x]);
            window_cost[i - x + 1] = get_cost();
        }

        // Step 2: DP to find k non-overlapping windows with minimum total cost.
        // dp[j][i] = min cost using j windows up to index i.
        // To optimize space, we can maintain DP state efficiently.
        int m = window_cost.size();
        const long long INF = 1e18;
        
        vector<long long> prev_dp(n + 1, INF);
        vector<long long> curr_dp(n + 1, INF);

        prev_dp[0] = 0;
        
        // Base case: 0 windows cost 0
        for (int i = 0; i <= n; ++i) prev_dp[i] = 0;

        for (int j = 1; j <= k; ++j) {
            fill(curr_dp.begin(), curr_dp.end(), INF);
            long long min_prev = INF;
            
            for (int i = 1; i <= n; ++i) {
                // If we can start a window at index i - x
                if (i - x >= 0) {
                    min_prev = min(min_prev, prev_dp[i - x]);
                }
                curr_dp[i] = curr_dp[i - 1]; // option to not pick a window starting at i-1
                if (i - x >= 0 && min_prev < INF) {
                    curr_dp[i] = min(curr_dp[i], min_prev + window_cost[i - x]);
                }
            }
            prev_dp = curr_dp;
        }

        return prev_dp[n];
    }
};