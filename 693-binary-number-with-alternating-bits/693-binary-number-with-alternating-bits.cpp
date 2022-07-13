class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s;
        for (int i = 0; n > 0; i++)
        {
            s += to_string(n % 2);
            n /= 2;
        }
        for (int i = 1; i <= s.length(); ++i)
        {
            if (s[i] == s[i - 1])
                return false;
        }
        return true;
    }
};