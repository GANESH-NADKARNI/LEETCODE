class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;

        for(char ch : word){
            if(isupper(ch)){
                upper++;
            }
        }

        if(upper == 1 && isupper(word[0]) ||  upper == 0 || upper == word.size()){
            return true;
        }
        
        return false;
    }
};