class Solution {
public:
     bool solve(int days,int cap,vector<int>&w)
    {
         
         int sum=0;
       for(auto i:w)
       {
           sum+=i;
           if(i>cap)return false;
           if(sum>cap)
           {
               days--;
               sum=i;
           }
           if(days<=0)return false;
       }
    return true;
        
         
    }
    int shipWithinDays(vector<int>& w, int days) {
       int low=0;
        int high=0;
        for(auto i:w)
        {
            low=max(low,i);
            high+=i;
        }
        int mid;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(solve(days,mid,w))
               high=mid;
            else low=mid+1;
            
        }
        return high;
    }
};