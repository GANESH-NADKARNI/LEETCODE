class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0,start = 0,end = height.size()-1;
        while(start <= end){
            max_area = max(max_area,min(height[end],height[start])*(end-start));
            if(height[start] < height[end])
                start++;
            else
                end--;
        }
        return max_area;
    }
};