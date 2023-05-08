class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int i=0,j=0,k=n-1;
        int sum=0;
        while(n--)
        {
           sum+=mat[i][k];
            sum+=mat[i][j];
            i++,j++,k--;
        }
        n=mat.size();
        if(n%2==1)
        {
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};