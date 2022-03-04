class Solution {

public:
    int lowest(vector<int>& nums, int target)
    {
            int n=nums.size();
        int low=0,high=n-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                if(mid==0||nums[mid]!=nums[mid-1]){
                    return mid;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1; 
    }
    int greatest(vector<int>& nums, int target)
    {
          int n=nums.size();
        int low=0,high=n-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                if(mid==n-1||nums[mid]!=nums[mid+1]){
                    return mid;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        //first occurence
       vector<int>v;
        v.push_back(lowest(nums,target));
        v.push_back(greatest(nums,target));
        return v;
    }
        //last occurence
       /*   
    }*/
    
};