class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(),n = mat[0].size(),ans = 0;
        vector<int> row(m,0),cols(n,0);
        for(int i = 0;i < m;i++)
            for(int j = 0;j < n;j++)
                if(mat[i][j] == 1){
                    row[i]++;
                    cols[j]++;
                }
         
        for(int i = 0;i < m;i++)
            for(int j = 0;j < n;j++)
                if(mat[i][j] == 1 && row[i] == 1 && cols[j]==1)
                    ans++;
        return ans;
    }
};