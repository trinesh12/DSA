class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();

        int ans=0;

        vector<int>cnt(101,0);

        for(int i=0;i<n;i++)
        cnt[nums[i]]++;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i]==nums[j] && nums[i]==nums[k])
                    {
                        if(j-i==k-j && cnt[nums[i]]==3)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;

    }
};