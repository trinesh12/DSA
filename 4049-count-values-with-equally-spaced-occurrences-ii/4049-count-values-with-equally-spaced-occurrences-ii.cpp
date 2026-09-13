class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>hs;

        int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++)
        {
            hs[nums[i]].push_back(i);
        }

        for(auto &[key,val]:hs)
        {
            if(val.size()<3)continue;

            int space=val[1]-val[0];
            bool flag=true;

            for(int k=1;k<val.size()-1;k++)
            {
                if(val[k+1]-val[k]!=space)
                {
                    flag=false;
                    break;

                }
            }
            if(flag)ans++;
        }

        return ans;

    }
};