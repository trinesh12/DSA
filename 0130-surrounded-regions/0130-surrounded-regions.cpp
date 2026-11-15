class Solution {
public:

vector<vector<int>> bfs(vector<vector<char>>& board,
                        int i, int j, int n, int m)
{
    queue<pair<int,int>> q;
    vector<vector<int>> nodes;

    bool surrounded = true;

    q.push({i,j});
    board[i][j] = 'V';

    while(!q.empty())
    {
        pair<int,int> tmp = q.front();
        q.pop();

        nodes.push_back({tmp.first,tmp.second});

        if(tmp.first == n-1 || tmp.second == m-1 ||
           tmp.first == 0 || tmp.second == 0)
        {
            surrounded = false;
        }

        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,-1,1};

        for(int k=0;k<4;k++)
        {
            int x = tmp.first + dx[k];
            int y = tmp.second + dy[k];

            if(x < 0 || y < 0 || x >= n || y >= m)
                continue;

            if(board[x][y] == 'O')
            {
                q.push({x,y});
                board[x][y] = 'V';
            }
        }
    }

    if(surrounded)
        return nodes;

    return {};
}

void solve(vector<vector<char>>& board)
{
    int n = board.size();
    if(n == 0) return;

    int m = board[0].size();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j] == 'O')
            {
                vector<vector<int>> nodes = bfs(board,i,j,n,m);

                for(auto& it : nodes)
                {
                    board[it[0]][it[1]] = 'X';
                }
            }
        }
    }

    // Restore boundary-connected O cells
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j] == 'V')
                board[i][j] = 'O';
        }
    }
}
};