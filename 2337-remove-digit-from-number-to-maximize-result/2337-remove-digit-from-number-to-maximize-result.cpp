class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<string>ans;
        for(int i=0;i<number.size();i++)
        {
            char ch=number[i];
            if(ch==digit)
            {
                string s="";
                if(i!=number.size()-1)
                s=number.substr(0,i)+number.substr(i+1);
                else
                    s=number.substr(0,i);
                ans.push_back(s);
            }
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        return ans[n-1];
    }
};