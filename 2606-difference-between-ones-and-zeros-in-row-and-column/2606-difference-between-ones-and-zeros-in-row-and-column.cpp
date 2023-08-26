class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>> row;
        vector<vector<int>> col;
        for(int r=0;r<grid.size();r++)
        {
            vector<int> v;
            int z=0,one=0;
            for(int c=0;c<grid[0].size();c++)
            {
                if(grid[r][c]==0)
                    z++;
                else
                    one++;
            }
            v.push_back(z);
            v.push_back(one);
            cout<<r<<" "<<z<<one<<endl;
            row.push_back(v);
        }
        for(int c=0;c<grid[0].size();c++)
        {
            vector<int> v;
            int z=0,one=0;
            for(int r=0;r<grid.size();r++)
            {
                if(grid[r][c]==0)
                    z++;
                else
                    one++;
            }
            v.push_back(z);
            v.push_back(one);
            cout<<c<<" "<<z<<one<<endl;
            col.push_back(v);
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
                grid[i][j]=row[i][1]+col[j][1]-row[i][0]-col[j][0];
        }
        return grid;
    }
};