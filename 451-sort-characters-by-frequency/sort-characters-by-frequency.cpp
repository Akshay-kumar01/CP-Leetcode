class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        string ans="";
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        map<int,vector<char>> mp;
        for(auto it=m.begin();it!=m.end();it++)
        {
            int i=it->second;
            mp[i].push_back(it->first);
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            for(int i=0;i<it->second.size();i++)
            {
                for(int j=0;j<it->first;j++)
                ans+=it->second[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};