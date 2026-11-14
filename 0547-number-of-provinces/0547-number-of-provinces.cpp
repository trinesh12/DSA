class Solution {
public:
    void bfs(vector<vector<int>>&grid,int i,int j,vector<int>&vis,int n,int m)
    {
          queue<int>q;
          q.push(i);
          vis[i]=1;
          

          while(!q.empty())
          {
            int node=q.front();
            q.pop();
            

            for(int k=0;k<m;k++)
            {
                if(grid[node][k]==1 &&vis[k]==0)
                {
                    vis[k]=1;
                    q.push(k);
                }
            }

          }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int m=isConnected[0].size();
        int cnt=0;
        vector<int>vis(n,0);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(isConnected[i][j]==1 && vis[i]==0)
                {
                        bfs(isConnected,i,j,vis,n,m);
                        cnt++;
                }
            }
        }

        return cnt;


        
    }
};