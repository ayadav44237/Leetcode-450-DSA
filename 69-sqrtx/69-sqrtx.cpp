class Solution {
public:
    int mySqrt(int x) {
        long long int low=0,high=x;
        int ans=-1;
        while(low<=high){
          long long int mid=(low+high)/2;
           long long int msq=mid*mid;
            if(msq==x){
                return mid;
            }
            else if(x<msq){
                high=mid-1;
            }
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};