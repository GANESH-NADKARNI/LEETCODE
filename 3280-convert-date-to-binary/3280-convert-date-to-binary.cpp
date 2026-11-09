class Solution {
public:
    string convertDateToBinary(string date) {
        int n=date.length(),x=0;
        string ans="";
        for(int i=0;i<=n;i++){
            if(date[i]=='-' || i==n){
                string s="";
                while(x!=0){
                    if(x%2==1) s="1"+s;
                    else s="0"+s;
                    x/=2;
                }
                if(i!=n) ans=ans+s+"-";
                else ans=ans+s;
            }
            else x=x*10+(int(date[i])-48);
        }
        return ans;
    }
};