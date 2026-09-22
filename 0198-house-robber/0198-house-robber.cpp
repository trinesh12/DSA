class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);
        if(n==1)return nums[0];

        dp[0]=nums[0];
        dp[1]=nums[1];
        if(n==2)return max(nums[0],nums[1]);
        if(n==3)
        {
            int ans=max(nums[0]+nums[2],nums[1]);
            return ans;
        }
        dp[2]=max(nums[1],nums[0]+nums[2]);
        

        for(int i=3;i<n;i++)
        {
            dp[i]=nums[i]+max(dp[i-2],dp[i-3]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(dp[i]>ans)ans=dp[i];
        }
        return  ans;

        
    
    }
};