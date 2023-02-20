class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int len=nums.size();
      int low,high,mid;
        low=0;
        high=len-1;
        if(target<nums[0])
            return low;
        if(target>nums[high])
            return high+1;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(nums[mid]==target)
                return mid;
            if(target>nums[mid])
                low=mid+1;
            if(target<nums[mid])
                high=mid-1;
            
        }
        return high+1;
    }
};