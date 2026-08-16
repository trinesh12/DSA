class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        
        int n=drones.size();
        int idx=-1;
        int min_dis=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int x=drones[i][0];
            int y=drones[i][1];
            int dis=abs(target[0]-x)+abs(target[1]-y);

            if(dis>drones[i][2])continue;

            if(min_dis>dis)
            {idx=i;
                min_dis=dis;
            }
            

        }
        return idx;

    }
};