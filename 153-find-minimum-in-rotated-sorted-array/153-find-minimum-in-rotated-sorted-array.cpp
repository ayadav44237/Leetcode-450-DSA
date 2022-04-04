class Solution {
public:
    int findMin(vector<int>& nums) {
//         ****************naive approach*****************
      sort(nums.begin(),nums.end());
        return nums[0];
    }
    
};