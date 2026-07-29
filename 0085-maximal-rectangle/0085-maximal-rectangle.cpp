class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
 if (matrix.empty() || matrix[0].empty()) return 0;  
      
        int num_columns = matrix[0].size();
        vector<int> heights(num_columns, 0);
        int max_area = 0;

        
        for (auto& row : matrix) {
        
            for (int j = 0; j < num_columns; ++j) {
                if (row[j] == '1') {
                    ++heights[j];  
                } else {
                    heights[j] = 0; 
                }
            }
           
            max_area = max(max_area, largestRectangleArea(heights));
        }
        return max_area;
    }


    int largestRectangleArea(vector<int>& heights) {
        int result = 0;
        int n = heights.size();
        stack<int> index_stack;
        vector<int> left(n, -1);
        vector<int> right(n, n);

 
        for (int i = 0; i < n; ++i) {
            while (!index_stack.empty() && heights[index_stack.top()] >= heights[i]) {
                right[index_stack.top()] = i;  
                index_stack.pop();
            }
            left[i] = index_stack.empty() ? -1 : index_stack.top();  \
            index_stack.push(i);
        }
      
        
        for (int i = 0; i < n; ++i) {
            result = max(result, heights[i] * (right[i] - left[i] - 1));
        }
      
        return result;
    }
};