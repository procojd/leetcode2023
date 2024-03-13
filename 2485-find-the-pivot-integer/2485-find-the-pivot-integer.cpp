class Solution {
public:
    int pivotInteger(int n) {
       if(n==1)
       {
           return 1;
       }
        
        int ts=n*(n+1)/2;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
            if(sum==ts)
            {
                return i;
            }
            ts-=i;
            
        }
        return -1;
    }
};