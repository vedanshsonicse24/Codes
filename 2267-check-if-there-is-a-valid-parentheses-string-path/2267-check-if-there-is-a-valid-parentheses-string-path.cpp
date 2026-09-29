class Solution {
    int m, n;
    int memo[100][100][201]; 
    bool dfs(int r, int c, int count, const vector<vector<char>>& grid) {
        if (count < 0) return false;
        
        if (r == m - 1 && c == n - 1) {
            return count + (grid[r][c] == '(' ? 1 : -1) == 0;
        }
        
        count += (grid[r][c] == '(' ? 1 : -1);
        if (count < 0) return false;

        if (memo[r][c][count] != -1) {
            return memo[r][c][count];
        }

        bool res = false;
        if (r + 1 < m) {
            res = res || dfs(r + 1, c, count, grid);
        }
        if (c + 1 < n) {
            res = res || dfs(r, c + 1, count, grid);
        }

        return memo[r][c][count] = res;
    }

public:
    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
                if ((m + n - 1) % 2 != 0) return false;
        
        memset(memo, -1, sizeof(memo));
        return dfs(0, 0, 0, grid);
        
    }
};