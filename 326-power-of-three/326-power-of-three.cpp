class Solution {
public:
    bool isPowerOfThree(int n) {
        // int c=1;
        // while(c<=n){
        //     c=c*3;
        //     if(c==n){
        //         return true;
        //     }
        // }
        if(n<1) return false;
	while(n % 3 == 0) n /= 3;    
	return n == 1;
       
    }
};