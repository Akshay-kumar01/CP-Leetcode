class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, int n, string word)
    {
        if(n==word.size())
            return true;
        
        if(i<0||j<0||i>=board.size()||j>=board[0].size()||word[n]!=board[i][j])
            return false;
        
        char ch=board[i][j];
        board[i][j]='0';
        bool ans= dfs(board,i+1,j,n+1,word)||dfs(board,i-1,j,n+1,word)
            ||dfs(board,i,j+1,n+1,word)||dfs(board,i,j-1,n+1,word);
        board[i][j]=ch;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word=="")
            return false;
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]==word[0]&&dfs(board,i,j,0,word))
                    return true;
            }
        return false;
    }
};