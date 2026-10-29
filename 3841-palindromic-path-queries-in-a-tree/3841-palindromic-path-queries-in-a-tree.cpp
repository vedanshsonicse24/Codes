class Solution {
    int n;
    vector<vector<int>> adj;
    vector<int> parent, depth, heavy, head, pos;
    vector<int> tree;
    string s_chars;
    int cur_pos;

    int dfs(int v, int p, int d) {
        parent[v] = p;
        depth[v] = d;
        int size = 1, max_c_size = 0;
        for (int u : adj[v]) {
            if (u != p) {
                int c_size = dfs(u, v, d + 1);
                size += c_size;
                if (c_size > max_c_size) {
                    max_c_size = c_size;
                    heavy[v] = u;
                }
            }
        }
        return size;
    }

    void decompose(int v, int h) {
        head[v] = h;
        pos[v] = cur_pos++;
        if (heavy[v] != -1) {
            decompose(heavy[v], h);
        }
        for (int u : adj[v]) {
            if (u != parent[v] && u != heavy[v]) {
                decompose(u, u);
            }
        }
    }

    void update_tree(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
            return;
        }
        int mid = (start + end) / 2;
        if (start <= idx && idx <= mid)
            update_tree(2 * node, start, mid, idx, val);
        else
            update_tree(2 * node + 1, mid + 1, end, idx, val);
        tree[node] = tree[2 * node] ^ tree[2 * node + 1];
    }

    int query_tree(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return 0;
        if (l <= start && end <= r) return tree[node];
        int mid = (start + end) / 2;
        return query_tree(2 * node, start, mid, l, r) ^ query_tree(2 * node + 1, mid + 1, end, l, r);
    }

    int query_path(int u, int v) {
        int res = 0;
        while (head[u] != head[v]) {
            if (depth[head[u]] > depth[head[v]]) {
                res ^= query_tree(1, 0, n - 1, pos[head[u]], pos[u]);
                u = parent[head[u]];
            } else {
                res ^= query_tree(1, 0, n - 1, pos[head[v]], pos[v]);
                v = parent[head[v]];
            }
        }
        if (depth[u] > depth[v]) {
            res ^= query_tree(1, 0, n - 1, pos[v], pos[u]);
        } else {
            res ^= query_tree(1, 0, n - 1, pos[u], pos[v]);
        }
        return res;
    }

public:
    vector<bool> palindromePath(int n_nodes, vector<vector<int>>& edges, string s, vector<string>& queries) {
        n = n_nodes;
        s_chars = s;
        adj.assign(n, vector<int>());
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        parent.assign(n, -1);
        depth.assign(n, 0);
        heavy.assign(n, -1);
        head.assign(n, 0);
        pos.assign(n, 0);
        tree.assign(4 * n, 0);
        cur_pos = 0;

        dfs(0, -1, 0);
        decompose(0, 0);

        for (int i = 0; i < n; ++i) {
            update_tree(1, 0, n - 1, pos[i], 1 << (s[i] - 'a'));
        }

        vector<bool> answer;
        for (const string& q : queries) {
            if (q[0] == 'u') {
                int u_i;
                char c;
                sscanf(q.c_str(), "update %d %c", &u_i, &c);
                s[u_i] = c;
                update_tree(1, 0, n - 1, pos[u_i], 1 << (c - 'a'));
            } else {
                int u_i, v_i;
                sscanf(q.c_str(), "query %d %d", &u_i, &v_i);
                int mask = query_path(u_i, v_i);
                if ((mask & (mask - 1)) == 0) {
                    answer.push_back(true);
                } else {
                    answer.push_back(false);
                }
            }
        }

        return answer;
    }
};