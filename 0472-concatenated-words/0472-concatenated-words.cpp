class Solution {
public:
    unordered_set<string>st;
    bool solve(string check)
    {
        for(int i=0;i<check.size();i++)
        {
            string prefix=check.substr(0,i+1);
            string suffix=check.substr(i+1);
            if((st.find(prefix)!=st.end())&&((st.find(suffix)!=st.end())||solve(suffix)))
                return true;
        }
        return false;
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
       vector<string>ans;
        if(words.size()==1)
            return ans;
        
        for(auto i:words)
        {
            st.insert(i);
        }
        for(auto i:st)
        {
            if(solve(i)) ans.push_back(i);
        }
        return ans;
    }
};