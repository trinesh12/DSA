class Solution {
public:
    
    bool  bfs(vector<vector<int>>&grid,int i,int j,int n,int m,vector<vector<bool>>&vis,int k)
    {
       
        queue<pair<int,int>>q;

        q.push({i,j});
         long long sum=grid[i][j];
         vis[i][j]=true;

        while(!q.empty())
        {
            pair<int,int>t;
            t=q.front();
            q.pop();
            int dx[4]={-1,0,1,0};
            int dy[4]={0,1,0,-1};

            for(int k=0;k<4;k++)
            {
                int r=t.first+dx[k];
                int l=t.second+dy[k];

                if(r<0 || r >=n || l<0 || l>=m)
                {
                    continue;
                }
                else if(grid[r][l]!=0 && vis[r][l]==false)
                {
                    q.push({r,l});
                    sum+=grid[r][l];
                    vis[r][l]=true;
                }
            }


        }
        if(sum%k==0)return true;

        return false;

    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();

        int count=0;
        vector<vector<bool>>vis(n,vector<bool>(m));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==false && grid[i][j]!=0 &&
                bfs(grid,i,j,n,m,vis,k)
                )
                {
                    count++;
                    
                }
            }
        }
        return count;
    }
};