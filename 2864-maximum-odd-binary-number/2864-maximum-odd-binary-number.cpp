class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt=0;
        string x(s.length(),'0');
         for (char c : s) {
            if (c == '1') cnt++;
        }
        
        if(cnt==0) return s;
            x[x.length()-1]='1';
            cnt--;
            int i=0;
            while(i<s.length() && cnt--){
                x[i]='1';
                i++;
            }
            return x;
        
    }
};