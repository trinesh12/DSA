class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>prefixsum(n+1,0);
        for(int i=0;i<n;i++)
            {
            prefixsum[i+1]=prefixsum[i]+gain[i];
        }
        int ans=prefixsum[0];
        for(int i=1;i<=n;i++)
            {
            if(ans<prefixsum[i])
                {
                ans=prefixsum[i];
            }
        }
        
        return ans;
    }
};