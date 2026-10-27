class Solution {
public:
    long long dfs(vector<vector<int>>&grid,int i,int j,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m)return 0;
        if(grid[i][j]==0)return 0;

        long long curr=grid[i][j];
        
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,-1,1};

        grid[i][j]=0;

        for(int k=0;k<4;k++)
        {
            curr+=dfs(grid,i+dx[k],j+dy[k],n,m);
        }
        return curr;


        


    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0 && dfs(grid,i,j,n,m)%k==0)
                {
                    count++;
                }

            }
        }
        return count;

    }
};