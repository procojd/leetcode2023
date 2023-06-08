class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i=n-1,j=0;
        int count=0;
        while(i>=0&&j<m)
        {
            if(grid[i][j]>=0)
            {
                j++;
            }
            else{
                count+=(m-j);
                i--;
            }
        }
        return count;
    }
};