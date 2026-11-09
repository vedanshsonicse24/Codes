
class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        set<int> free;
        
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > busy;

        vector<int> cnt(k, 0);

        for (int i = 0; i < k; i++) {
            free.insert(i);
        }

        for (int i = 0; i < arrival.size(); i++) {
            int t = arrival[i];

            while (!busy.empty() && busy.top().first <= t) {
                free.insert(busy.top().second);
                busy.pop();
            }

            if (free.empty()) {
                continue;
            }

            int start = i % k;
            auto it = free.lower_bound(start);

            if (it == free.end()) {
                it = free.begin();
            }

            int id = *it;

            free.erase(it);
            cnt[id]++;

            busy.push({t + load[i], id});
        }

        int mx = *max_element(cnt.begin(), cnt.end());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            if (cnt[i] == mx) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
