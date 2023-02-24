class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
       priority_queue<int>pq;
        int mini=INT_MAX;
        for(auto i:nums)
        {
            if(i%2==1)
                i=i*2;
            pq.push(i);
            mini=min(mini,i);
        }
        int ans=INT_MAX;
        while(1)
        {
            int top=pq.top();
            pq.pop();
            
            ans=min(ans,top-mini);
            if(top%2==1)
                break;
            
            top=top/2;
            pq.push(top);
            
            
            mini=min(mini,top);
            
        }
        return ans;
    }
};