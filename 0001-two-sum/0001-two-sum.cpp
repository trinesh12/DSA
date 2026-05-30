class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int>a;
        int size=nums.size();
        for(i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
            if(nums[i]+nums[j]==target)
            {
             a.push_back(i);
             a.emplace_back(j);
            }
            }
        }
        return a;
    }


};