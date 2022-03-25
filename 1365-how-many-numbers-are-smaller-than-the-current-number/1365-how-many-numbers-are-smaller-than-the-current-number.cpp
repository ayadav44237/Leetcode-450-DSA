class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
       int n=nums.size();
        vector<int>v(n);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    count++;
                }
                 v[i]=count;
            
             }
            count=0;
           
        }
        return v;
        
    }
};