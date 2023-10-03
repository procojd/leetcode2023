class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int count=0;
        for(auto i:mp)
        {
            count+=((i.second*(i.second-1))/2);
        }
        return count;
    }
};