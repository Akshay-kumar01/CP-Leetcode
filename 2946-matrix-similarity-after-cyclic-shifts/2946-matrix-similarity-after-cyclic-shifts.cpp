class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> copy( m , vector<int> (n));  
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                copy[i][j]=mat[i][j];
        while(k!=0)
        {  
            for(int i=0;i<m;i++)
            {
                if(i%2==0)
                {
                    int f=0,s=1;
                    while(s<n)
                    {
                        swap(mat[i][f],mat[i][s]);
                        f++;
                        s++;
                    }
                }
                else
                {
                    int f=n-1,s=n-2;
                    while(s>=0)
                    {
                        swap(mat[i][f],mat[i][s]);
                        f--;
                        s--;
                    }
                }
            }
            k--;
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(copy[i][j]!=mat[i][j])
                    return false;
            }
        }
        return true;
    }
};