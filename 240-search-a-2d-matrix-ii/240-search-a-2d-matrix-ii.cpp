class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // *******NAIVE SOLUTION TIME LIMIT EXCEEDE***********
//         vector<int>v;
//         int m=matrix.size();
//         int n=matrix[0].size();
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==target){
//                    v.push_back(target);
//                 }
//             }
//         }
//         if(v.size()>0){
//             return true;
//         }
//         return false;
        int r=matrix.size();
        int c=matrix[0].size();
        int i=0,j=c-1;
        while(i<r&&j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};