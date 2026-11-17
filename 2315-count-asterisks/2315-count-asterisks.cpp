class Solution {
public:
    int countAsterisks(string s) {
        bool a=false;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(!a && s[i]=='*') cnt++;
            if(s[i]=='|') a=!a;
        }
        return cnt;
    }
};