class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();

        int a=INT_MIN,b=INT_MIN;

        for(int i=0;i<n;i++)
        {
            if(a<=nums[i])
            {
                b=a;
                a=nums[i];
            }
            else if(b<nums[i])
            b=nums[i];
        }
        return (a-1)*(b-1);

    }
};