class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>c(2*n);
        for(int i=0;i<nums.size();i++){
            c[i]=nums[i];
             c[n+i]=nums[i];
        }
        
        return c;
    }
};