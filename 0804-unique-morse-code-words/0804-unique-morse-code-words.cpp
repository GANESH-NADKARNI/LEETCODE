class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string x[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> y;
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string z="";
            for(int j=0;j<words[i].size();j++){
                z+=x[words[i][j]-'a'];
            }
            if(y[z]!=1){
                y[z]=1;
                cnt++;
            }
        }
        return cnt;
    }
};