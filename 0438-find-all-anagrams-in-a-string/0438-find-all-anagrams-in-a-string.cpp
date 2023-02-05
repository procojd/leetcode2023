class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v(26,0);
        vector<int>v1(26,0);
        vector<int>ans;
        int n=s.size();
        int m=p.size();
        if(n<m)
            return ans;
        for(int i=0;i<m;i++)
        {
            v[p[i]-'a']++;
            v1[s[i]-'a']++;
        }
        if(v==v1)
        {ans.push_back(0);}
        int j=m;
        int i=0;
        while(j<n)
        {
            v1[s[j]-'a']++;
            v1[s[i]-'a']--;
            i++;
            j++;
            if(v1==v)
            {
                ans.push_back(i);
            }
        }
        return ans;
        
        
    }
};