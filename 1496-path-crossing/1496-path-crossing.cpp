class Solution {
public:
    bool isPathCrossing(string path) {
        int p1=0;
        int p2=0;
        int count=0;
        set<pair<int,int>>s;
        s.insert(make_pair(0,0));
        for(auto i:path)
        {
            if(i=='N')
            {
                p2++;
            }
            else if(i=='S')
            {
                p2--;
            }
            else if(i=='E')
            {
                p1++;
            }
            else if(i=='W')
            {
                p1--;
            }
            // cout<<p1<<p2<<endl;
            s.insert(make_pair(p1,p2));
            if(s.size()==count+1)
            {
                return true;
            }
            count++;
        }
        return false;
    }
};