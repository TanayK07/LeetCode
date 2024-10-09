class Solution {
public:


    void dfs(vector<vector<char>>& b, int i, int j){
        int m=b.size(), n =b[0].size();
        if (i<0 || j< 0 || i>=m || j>=n || b[i][j]!='O') return;
        b[i][j]='1';
        dfs(b,i+1,j);
        dfs(b,i-1,j);
        dfs(b,i,j+1);
        dfs(b,i,j-1);
    }

    void borderfunction(vector<vector<char>>& b){
        int m=b.size(), n =b[0].size();
        for (int i=0;i<m;i++){
            if(b[i][0]=='O') dfs (b,i,0);
            if(b[i][n-1]=='O') dfs(b,i,n-1);
        }
        for (int j=0;j<n;j++){
            if(b[0][j]=='O') dfs(b,0,j);
            if(b[m-1][j]=='O') dfs(b,m-1,j);
        }


    }

    void solve(vector<vector<char>>& board) {
        int m=board.size(), n =board[0].size();
        if(board.empty()) return;
        borderfunction(board);
        for(int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(board[i][j]=='1') board[i][j]='O';
                else if (board[i][j]=='O') board[i][j]='X';
            }
        }

        

    }
};