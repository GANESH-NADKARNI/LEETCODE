class Solution {
public:
    string sortSentence(string s) {
        unordered_map<int,string> mp;
        string temp;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                mp[s[i] - '0'] = temp;
                i++;
                temp = "";
            }
            else{
                temp += s[i];
            }
        }

        string ans;
        
        for (int i = 1; i <= 9; i++) {
            if (!mp[i].empty()) {
                ans += mp[i] + " ";
            }
        }

        ans.pop_back();

        return ans;
    }
};