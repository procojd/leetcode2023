class Solution {
public:
    vector<int> countBits(int n) {
     vector<int>ans;
    int i=0;
        while(i<=n)
        {
            int n1=__builtin_popcount(i);
            
            ans.push_back(n1);
            i++;
        }
        return ans;
    }
};