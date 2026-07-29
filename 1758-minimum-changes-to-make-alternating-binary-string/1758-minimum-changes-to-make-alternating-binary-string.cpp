class Solution {
public:
    int minOperations(string s) {
        int cnt=0,n=s.length(), i=0;
        for(char c :s){
            cnt+=(c^i)&1;
            i++;
        }
        return min(cnt,n-cnt) ;
    }
};