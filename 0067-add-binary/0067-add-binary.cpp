class Solution {
public:
    string addBinary(string a, string b) {
        int x=a.length()-1;
        int y=b.length()-1;
        int carry=0;
        string ans="";
    
         while(x>=0&&y>=0){
        int a1=a[x]-'0';
        
        int b1=b[y]-'0';
      int ad=(a1+b1+carry)%2;
         carry = (a1+b1+carry)/2;
        ans=to_string(ad)+ans;
        x--;
        y--;
    }
        if(x>=0){
        while(x>=0){
        int a1=a[x]-'0';
        int ad = (carry+a1)%2;
        carry=(carry+a1)/2;
        ans=to_string(ad)+ans;
        x--;
        }
    }
    if(y>=0){
        while(y>=0){
        int b1=b[y]-'0';
        int ad = (carry+b1)%2;
        carry=(carry+b1)/2;
        ans=to_string(ad)+ans;
        y--;
        }
    }
    if(carry==1){
        ans="1"+ans;
    }
        return ans;
    }
};