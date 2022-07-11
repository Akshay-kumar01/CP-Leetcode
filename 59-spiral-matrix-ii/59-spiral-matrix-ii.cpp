class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans;
        int a[n][n];
        int cnt=0,tne=n*n;
        int minr=0,maxr=n-1,minc=0,maxc=n-1;
        while(cnt<tne)
        {
            for(int i=minr,j=minc;j<=maxc&&cnt<tne;j++)
            {
                cnt++;
                a[i][j]=cnt;
            }
            minr++;
            for(int i=minr,j=maxc;i<=maxr&&cnt<tne;i++)
            {
                cnt++;
                a[i][j]=cnt;
            }
            maxc--;
            for(int i=maxr,j=maxc;j>=minc&&cnt<tne;j--)
            {
                cnt++;
                a[i][j]=cnt;
            }
            maxr--;
            for(int i=maxr,j=minc;i>=minr&&cnt<tne;i--)
            {
                cnt++;
                a[i][j]=cnt;
            }
            minc++;
        }
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                v.push_back(a[i][j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};