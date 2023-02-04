class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
       vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<s1.size();i++)
        {
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if(v1==v2)
            return true;
        int n=s1.size();
        int m=s2.size();
        int i=0;
        while(n<m)
        {
            v2[s2[i]-'a']--;
            v2[s2[n]-'a']++;
            i++;
            n++;
            if(v1==v2)
            return true;
            
            
        }
        return false;
        
    }
};