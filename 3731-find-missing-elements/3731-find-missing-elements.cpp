class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>ans;
        sort(nums.begin(),nums.end());
        if(mx-mn+1==n)return ans;
        int k=0;
        for(int i=mn;i<=mx;i++)
            {
                if(k<n && nums[k]==i)k++;
                else
                {
                    ans.push_back(i);
                }
                    
            }
        return ans;
        
    }
};