class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //APPROACH 1;
        // unordered_set<int>seen;
        // for(auto &num:nums){
        //     if(seen.count(num))
        //         return num;
        //     seen.insert(num);
        // }
        // return -1;
        //APPROACH 2,
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
                
        }
        return nums[0];
    }
};