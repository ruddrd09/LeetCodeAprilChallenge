class Solution {
public:
    int r[4] = {-1,0,0,1};
    int c[4] = {0,-1,1,0};
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();
        grid[i][j] = '2';
        for(int k=0;k<4;k++) {
            int x = i + r[k];
            int y = j + c[k];
            if(x>=0 && x<m && y>=0 && y<n && grid[x][y] == '1') {
                dfs(grid,x,y);     
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if(m == 0) {
            return 0;
        }
        int n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j] == '1') {
                    dfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};