class Solution {
public:
    void solve(string s,string d, vector<string>& ans, int i, map<int,vector<char>>m)
    {
        if(i==d.length())
        {
            ans.push_back(s);
            s="";
            return;
        }
        int x=(int)d[i]-48;
        for(int j=0;j<m[x].size();j++)
        {
            solve(s+m[x][j],d,ans,i+1,m);
        }
    }
    vector<string> letterCombinations(string digits) {
        map<int,vector<char>>m;
        char a='a';
        for(int i=2;i<=9;i++)
        {
            vector<char>v;
            if(i==7||i==9)
            {
                for(int i=0;i<4;i++)
                {
                    v.push_back(a);
                    a++;
                }
            }
            else
            {
                for(int j=0;j<3;j++)
                {
                    v.push_back(a);
                    a++;
                }
            }
            m[i]=v;
        }
        vector<string>ans;
        if(digits.length()==0)
            return ans;
        string s="";
        solve(s,digits,ans,0,m);
        return ans;
    }
};