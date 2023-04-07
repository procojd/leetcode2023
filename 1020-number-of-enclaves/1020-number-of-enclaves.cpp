class Solution {
public:
    void makezero(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]!=1)
            return;
        
        grid[i][j]=0;
         makezero(i+1,j,grid);
         makezero(i,j+1,grid);
         makezero(i-1,j,grid);
         makezero(i,j-1,grid);
       
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i == 0 || j == 0 || i == n-1 || j == m-1)
                {
                if(grid[i][j]==1)
                makezero(i,j,grid);}
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<m;j++)
            {
               if(grid[i][j]==1)
                   count++;
        }
    }
        return count;}
};