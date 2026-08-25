class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>hs;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%k==0)hs.insert(nums[i]);
        }
        bool found=false;
        int ans,el=k;
       for(int i=0;i<hs.size();i++)
       {
        if(hs.find(el)==hs.end())
        {
            return el;
        }
        el=k*(i+2);     
       }
       return el;


        
        
       
    }
};