// class Solution {
// public:
//     int brokenCalc(int startValue, int target) {
//         int result=0;
//         while(target>startValue)
//         {
//             result++;
//             if(target%2==0)
//                 target=target/2;
//             else
//                 target+=1;
//         }
//         result=result+(startValue-target);
//         return result;
//     }
// };
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count=0;
        while(startValue<target){
                    count++;
               if(target%2==0){
                   target=target/2;
                   
               }
               else{
                   target =target+1;
                  
               }
            
           } 
        count=count+(startValue-target);
        return count;
    }
};