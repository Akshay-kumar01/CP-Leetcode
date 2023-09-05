class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size(), n2=word2.size();
        string ans="";
        if(n1>=n2)
        {
            int i=0;
            for(i;i<n2;i++)
            {
                ans+=word1[i];
                ans+=word2[i];
            }
            for(i;i<n1;i++)
                ans+=word1[i];
        }
        else
        {
            int i=0;
            for(i;i<n1;i++)
            {
                ans+=word1[i];
                ans+=word2[i];
            }
            for(i;i<n2;i++)
                ans+=word2[i];
        }
        return ans;
    }
};