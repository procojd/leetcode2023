class Solution {
public:
    int partitionString(string s) {
       unordered_map<char,int>mp;
        int n=s.size();
        int j=0;
        int ans=0;
    while(j<n)
    {
        mp[s[j]]++;
        if(mp[s[j]]>1)
        {
            mp.clear();
           
            ans++;
            mp[s[j]]++;
        }
        j++;
    }
        ans++;
        return ans;
    }
};