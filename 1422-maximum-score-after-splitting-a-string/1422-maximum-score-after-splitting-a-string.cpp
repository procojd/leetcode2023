class Solution {
public:
    int maxScore(string s) {
        int left=0,maxlen=0;
        int maxright=0;
        for(auto i:s)
        {
            if(i=='1')
                maxright++;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            
            if(s[i]=='0')
            {
                left++;
            }
            else {maxright--;}
            
            maxlen=max(maxlen,maxright+left);
        }
        return maxlen;
    }
};