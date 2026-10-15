class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();

        

        int ans=0;

        for(int i=0;i<n;i++)
        {
            vector<int>cnt(101,0);
            int dups=0;
            for(int j=i;j<n;j++)
            {
                cnt[nums[j]]++;
                if(cnt[nums[j]]==1)dups++;

                ans+=dups*dups;

            }
        }
        return ans;

    }
};