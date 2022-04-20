// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=0,high=n-1;
        int result=n; //result is taken as n already because nth i.e. last element will alwas be bad  version
        while(low<=high){
            long long int mid=low+(high-low)/2;
            if(isBadVersion(mid)){
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
};