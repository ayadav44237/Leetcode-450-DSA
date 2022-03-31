class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>v;
        int m = matrix.size();
       int n = matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==target){
                    v.push_back(target);
                }
            }
        }
        if(v.size()>0){
            return true;
        }
        return false;
    }
};