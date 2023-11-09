class Solution {
public:
    int countHomogenous(string s) {
        int i=0,j=0;
        int ans=0;
        int mod=1000000007;
        while(j<s.size())  
        {
            if(s[j]==s[i])
            {
                ans=((j-i+1)+ans%mod)%mod;
                j++;
            }
            else{
                i=j;
                ans=(1+ans%mod)%mod;
                j++;
            }
        }
        return ans;
    }
};