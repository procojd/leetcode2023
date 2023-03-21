class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
      long long ans=0;
        long long i=0,j=0;
        int n=nums.size();
        while(j<n)
        {
            if(nums[j]!=0)
            {
                if(i!=j)
                ans+=((j-i+1)*(j-i))/2;
                i=j;
                i++;j++;
               
            }
            else{
                j++;
            }
        }
        ans+=((j-i+1)*(j-i))/2;
        return ans;
    }
};