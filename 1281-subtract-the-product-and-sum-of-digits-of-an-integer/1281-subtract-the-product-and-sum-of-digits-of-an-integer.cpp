class Solution {
public:
    int subtractProductAndSum(int n) {
        int a=1,j=0;
        while(n>0){
            int c=n%10;
             a=a*c;
             j=j+c;
            n=n/10;
            
        }
        return a-j;
    }
};