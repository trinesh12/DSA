class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos=0,i=0;
        while(i<nums.size())
        {
            if(nums[i]!=0)
            {
                nums[pos]=nums[i];
                pos++;
                
            }
            i++;

        }
        for(int j=pos;j<nums.size();j++)
        {
            nums[j]=0;
        }

        
    }
};