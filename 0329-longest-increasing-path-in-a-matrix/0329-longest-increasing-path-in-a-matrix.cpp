class Solution {
public:
    int dfs( int i, int j, vector<vector<int>> &grid, vector<vector<int>>& dp ){

        if ( dp[i][j] != -1 ) return dp[i][j];
        else {
            int m = grid.size(), n = grid[0].size();
            int val = 1;
            if( i - 1 >= 0 and grid[i][j] > grid[i-1][j] )  val = max(dfs( i -1, j, grid, dp ) + 1, val);
            if( j - 1 >= 0 and grid[i][j] > grid[i][j- 1] ) val = max(dfs( i, j - 1, grid, dp ) + 1, val);
            if( i + 1 < m  and grid[i][j] > grid[i+1][j] )  val = max(dfs( i + 1, j, grid, dp ) + 1, val);
            if( j + 1 < n  and grid[i][j] > grid[i][j+1] )  val = max(dfs( i, j + 1, grid, dp ) + 1, val);
            return dp[i][j] = val;
        }
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        

        int m = matrix.size(), n = matrix[0].size();

        vector<vector<int>> dp( m, vector<int> ( n, -1 ) );
        int LIP = 1;
        for ( int i = 0; i < m; ++i ){
            for ( int j = 0; j < n; ++j ){
                 
                  if( dp[i][j] == -1 ) dfs(i, j, matrix, dp );
                  LIP = max( LIP, dp[i][j] );

            }
        }

        return LIP;
    }
};