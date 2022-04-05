class Solution {
public:
//     ============APPROACH 1==========
//     void reverseString(vector<char>& s) {
//       reverse(s.begin(),s.end());
//         for(int i=0;i<s.size();i++){
//             cout<<s[i];
//         }
       
//     }
//     APPROACH 2========================]
    void reverseString(vector<char>& s){
        int i=0,j=s.size()-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }
    }
};