class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
    int n=arr.size();
        if(n==2)
            return true;
       sort(arr.begin(),arr.end());
        for(int i=1;i<n-1;i++)
        {
           if(2*arr[i]!=(arr[i-1]+arr[i+1]))
               return false;
        }
        return true;
        
    }
};