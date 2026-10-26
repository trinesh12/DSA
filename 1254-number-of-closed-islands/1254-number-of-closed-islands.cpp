class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0  && vis[i][j]==false && bfs(grid,i,j,vis,n,m) )
                {
                    count++;
                    
                }
            }
        }
        return count;
    }

    bool bfs(vector<vector<int>>&grid,int i,int j,vector<vector<bool>>&vis,int n,int m)
    {
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
         bool res=true;
        queue<pair<int,int>>q;
        vis[i][j]=true;
        q.push({i,j});

        while(!q.empty())
        {
            pair<int,int>t;
            t=q.front();
            q.pop();
           
            for(int k=0;k<4;k++)
            {
                int r=t.first+dx[k];
                int l=t.second+dy[k];

                if(r<0 || r>=n || l<0 || l>=m)
                {
                    res=false;
                }
                else if(grid[r][l]==0 && vis[r][l]==false)
                {
                    
                    q.push({r,l});
                    vis[r][l]=true;
                }

            }
        }
        return res;
    }
};