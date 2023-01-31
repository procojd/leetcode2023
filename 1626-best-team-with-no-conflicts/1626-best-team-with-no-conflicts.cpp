class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=ages.size();
        int ms=0;
       int dp[n];
        memset(dp,0,sizeof dp) ;
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({ages[i],scores[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(v[i][1]>=v[j][1])
                {
                    dp[i]=max(dp[i],dp[j]+v[i][1]);
                }
                
                
            }
            ms=max(ms,dp[i]);
        }
        return ms;
    }
};