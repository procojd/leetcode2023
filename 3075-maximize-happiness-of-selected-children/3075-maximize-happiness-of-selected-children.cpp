class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
       sort(happiness.begin(),happiness.end());
        int n=happiness.size()-1;
    long long sum=0;
        for(int i=n;i>=0;i--)
        {
            
            if(happiness[i]-(n-i)>0&&k>0)
                
            {k--;
                sum+=(happiness[i]-(n-i));}
        }
        return sum;
    }
};