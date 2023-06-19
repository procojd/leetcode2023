class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int maxi=gain[0];
        int sum=0;
        for(auto i:gain)
        {
            sum+=i;
            maxi=max(maxi,sum);
        }
        if(maxi<0)
            return 0;
        return maxi;
    }
};