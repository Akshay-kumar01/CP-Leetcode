class Solution {
public:
    int solve(int n)
    {
        if(n==1)
            return 1;
        
        if(n==0)
            return 0;
        
        if(n%4==0)
            return solve(n/4);

            return 0;
            
    }
    bool isPowerOfFour(int n) {
        if(solve(n))
            return true;
        return false;
    }
};