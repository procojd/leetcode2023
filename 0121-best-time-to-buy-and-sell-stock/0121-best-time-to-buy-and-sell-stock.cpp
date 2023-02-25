class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr=INT_MAX;
        int ans=0;
       for(int i=0;i<prices.size();i++)
       {
           if(prices[i]<curr)
               curr=prices[i];
           ans=max(ans,prices[i]-curr);
           
       }
        return ans;
    }
};