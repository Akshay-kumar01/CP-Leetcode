class Solution {
public:
    bool findf(vector<int> &piles, int i, int alice, int bob, int move)
    {
        if(i<0)
            return (alice>bob);
        if(move)
        {
            bob+=piles[i];
            findf(piles, i-1, alice, bob, 0);
        }
        else
        {
            alice+=piles[i];
            findf(piles, i-1, alice, bob, 1);
        }
        return (alice>bob);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        return findf(piles, n-1, 0, 0, 0);
    }
};