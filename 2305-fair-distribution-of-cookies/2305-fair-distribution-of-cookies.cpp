class Solution {
public:
    int ans=INT_MAX;
    void solve(vector<int>& cookies, vector<int>& bags, int k, int i)
    {
        if(i>=cookies.size())
        {
            int mx=INT_MIN;
            for(int i=0;i<k;i++)
                mx=max(mx,bags[i]);
            ans=min(ans,mx);
            return;
        }
        for(int j=0;j<k;j++)
        {
            bags[j]+=cookies[i];
            solve(cookies,bags,k,i+1);
            bags[j]-=cookies[i];
            if(bags[j]==0)
                break;
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> bags(k,0);
        solve(cookies,bags,k,0);
        return ans;
    }
};