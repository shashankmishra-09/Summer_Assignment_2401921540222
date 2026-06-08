RESHAPE THE MATRIX

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r*c) return mat;
        vector<vector<int>> ans(r , vector<int>(c));
        int k = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                ans[k/c][k%c] = mat[i][j];
                k++;
            }
        }
        return ans;
    }
};
