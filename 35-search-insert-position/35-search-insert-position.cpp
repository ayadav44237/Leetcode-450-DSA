class Solution {
public:
     int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;//here high-low to overcome stack overflow in case of large values...this code will also work in case of duplicates..
            if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
//         APPROACH 2;
        //  return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};