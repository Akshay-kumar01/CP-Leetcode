class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string st=s;
        reverse(s.begin(),s.end());
        if(s==st)
            return true;
        else
            return false;
    }
};