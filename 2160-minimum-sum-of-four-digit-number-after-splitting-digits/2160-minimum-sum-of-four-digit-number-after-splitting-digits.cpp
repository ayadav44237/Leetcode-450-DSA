class Solution {
public:
    int minimumSum(int num) {
        
        vector<int>digit;
        vector<int>x;
        while(num>0){
            int a=num%10;
            digit.push_back(a);
            num=num/10;
            
        }
        sort(digit.begin(),digit.end());
       int i=(digit[0]*10+digit[2])+(digit[1]*10+digit[3]);
        return i; 
        
    }
};