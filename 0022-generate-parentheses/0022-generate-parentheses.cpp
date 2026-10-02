class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(0,0,"",res,n);
        return res;
    }
private:
    void dfs(int openP,int closeP,string s,vector<string>& res,int n){

        if(openP == closeP && openP + closeP == n*2){
            res.push_back(s);
            return;
        }

        if(openP < n){
            dfs(openP + 1, closeP, s + "(", res, n);
        }

        if(closeP < openP){
            dfs(openP, closeP + 1, s + ")", res, n);
        }
    }
};