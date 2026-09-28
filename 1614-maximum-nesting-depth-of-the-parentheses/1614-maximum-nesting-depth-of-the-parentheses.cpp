class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, res = 0;
        for(char ch : s){
            if(ch == ')'){
                depth--;
                continue;
            }
            if(ch != '('){
                continue;
            }

            depth++;

            res = max(res, depth);
        }

        return res;
    }
};