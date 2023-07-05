class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int maxsum=0;
        int prevsum=0;
        int currsum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                currsum++;
            if(nums[i]==0||i==nums.size()-1)
            {
                maxsum=max(maxsum,(currsum+prevsum));
                prevsum=currsum;
                currsum=0;
                
            }
            
        }
        maxsum=max(maxsum,(currsum+prevsum));
        if(maxsum==nums.size())
            maxsum--;
        return maxsum;
    }
};