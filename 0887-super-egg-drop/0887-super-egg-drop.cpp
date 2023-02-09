class Solution {
public:
    int dp[101][10001];
    int func(int e,int f)
    {
        //base case
        if(dp[e][f] != -1)
            return dp[e][f];
        if(f <= 1)
            return dp[e][f] = f;
        if(e == 1)
            return dp[e][f] = f;
        //binary search
        int low = 1;
        int high = f;
        int ans = INT_MAX;
        while(low <= high)
        {
            int mid = low + (high-low)/2 ;
            //egg breaks
            int by;
            if(dp[e-1][mid-1] != -1)
                by = dp[e-1][mid-1];
            else
            { 
                by = func(e-1,mid-1);
                dp[e-1][mid-1] = by;
            }    
            //egg dosen't breaks
            int bn;
            if(dp[e][f-mid] != -1)
                bn = dp[e][f-mid];
            else
            {
                bn = func(e,f-mid);
                dp[e][f-mid] = bn;
            }    
            //temp ans plus 1 coz 1 attempt
            int temp_ans = 1 + max(by,bn);
            ans = min(ans,temp_ans);
            //binary search logic
            if(by > bn)
                high = mid-1;
            else
                low  = mid+1;
        }
        return dp[e][f] = ans;
    }    
    int superEggDrop(int e, int f) 
    {
        memset(dp,-1,sizeof(dp));
        return func(e,f);
    }
};