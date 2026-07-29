class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int row = m.size(),col = m[0].size();
        int start = 0, end = row * col - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;

            int r = mid / col , c = mid % col;

            int val = m[r][c];

            if(val == target){
                return true;
            }
            else if(val < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }

        }
        return false;
    }
};