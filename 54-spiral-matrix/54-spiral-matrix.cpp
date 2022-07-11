class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int cnt=0;
        int minr=0,minc=0,maxr=matrix.size()-1,maxc=matrix[0].size()-1;
        int tne=(maxr+1)*(maxc+1);
        vector<int>v;
        while(cnt<tne)
        {
            for(int i=minr,j=minc;j<=maxc&&cnt<tne;j++)
            {
                // cout<<matrix[i][j]<<endl;
                v.push_back(matrix[i][j]);
                cnt++;
            }
            minr++;
            for(int i=minr,j=maxc;i<=maxr&&cnt<tne;i++)
            {
                // cout<<matrix[i][j]<<endl;
                v.push_back(matrix[i][j]);
                cnt++;
            }
            maxc--;
            for(int j=maxc,i=maxr;j>=minc&&cnt<tne;j--)
            {
                // cout<<matrix[i][j]<<endl;
                v.push_back(matrix[i][j]);                
                cnt++;
            }
            maxr--;
            for(int i=maxr,j=minc;i>=minr&&cnt<tne;i--)
            {
                // cout<<matrix[i][j]<<endl;
                v.push_back(matrix[i][j]);                
                cnt++;
            }
            minc++;
        }
        return v;
    }
};