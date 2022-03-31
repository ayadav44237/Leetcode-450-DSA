class Solution {
    public boolean isPowerOfFour(int n) {
        boolean bol=false;
        int i=0,n1=1;
        while(i<32){
            if((n1<<i)==n) {
                return true;
                } else {
                    i+=2;
                }
        }
        return false;
    }
}