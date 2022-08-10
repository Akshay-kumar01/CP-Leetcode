class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort(strs.begin(),strs.end());
        string s=strs[0];
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            int f=0;
            for(int j=1;j<strs.size();j++)
            {
                if(i>=strs[j].length())
                {
                    f=1;
                    break;
                }
                if(s[i]!=strs[j][i])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
            ans+=s[i];
        }
        return ans;
    }
};