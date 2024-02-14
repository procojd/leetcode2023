class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        
        for(auto i:nums)
        {
            i<0?neg.push_back(i):pos.push_back(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            i%2==0?nums[i]=pos[i/2]:nums[i]=neg[i/2];
        }
        return nums;
    }
};