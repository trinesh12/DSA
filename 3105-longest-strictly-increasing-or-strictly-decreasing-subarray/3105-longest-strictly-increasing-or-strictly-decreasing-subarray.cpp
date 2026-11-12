class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n-1;i++)
        {
           int j=i;
           while(j<n-1 && nums[j]<nums[j+1])
           {
            ans=max(ans,j-i+2);
            j++;
           }
           j=i;

           while(j<n-1 && nums[j]>nums[j+1])
           {
            ans=max(ans,j-i+2);
            j++;
           }
        }
        return ans;
    }
};