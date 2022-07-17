class Solution {
public:
    bool solve(vector<int>& piles,int i,int bob, int alice, int move)
    {
        if(i<0)
            return (alice>bob);
        bool ans;
        if(move)
        {
            bob+=piles[i];
            ans=solve(piles,i-1,bob,alice,1);
        }
        else
        {
            alice+=piles[i];
            ans=solve(piles,i-1,bob,alice,0);
        }
        return ans;
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        reverse(piles.begin(),piles.end());
        return solve(piles,0,0,0,0);
    }
};