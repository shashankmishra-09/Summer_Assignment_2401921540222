SPIRAL MATRIX

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty()) return ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int upper = 0;
        int right = n-1 ;
        int down = m-1;
        while(left<=right && upper<=down){
            for(int i = left;i<=right ;i++){
                ans.push_back(matrix[upper][i]);
            }
            upper = upper + 1;
            for(int i = upper;i<=down;i++){
                ans.push_back(matrix[i][right]);
            }
            right = right -1;
            if(upper<=down){
            for(int i = right ;i>=left;i--){
                ans.push_back(matrix[down][i]);
            }
            down = down-1;
            }
            if(left<=right){
            for(int i = down ;i>=upper;i--){
                ans.push_back(matrix[i][left]);
            }
            left = left+1;
            }
        }
        return ans ;
    }
};
