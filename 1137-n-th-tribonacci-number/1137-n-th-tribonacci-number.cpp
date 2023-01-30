class Solution {
public:
    int tribonacci(int n) {
        int t1=0,t2=1,t3=1;
        int ans=0;
      if(n==0)
          return t1;
        if(n<=2)
            return t2;
        for(int i=3;i<=n;i++){
           ans=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=ans;
        }
        return ans;
    }
};