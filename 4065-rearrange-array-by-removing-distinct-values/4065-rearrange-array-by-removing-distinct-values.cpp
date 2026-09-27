class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> freq(101,0);
        int max_freq=0;
        for(int x:nums)
        {
            freq[x]++;
            max_freq = max(max_freq,freq[x]);
        }
        vector<int> ans;
        
        for(int round =0; round<max_freq;++round)
        {
            for(int val =1; val<=100;++val)
            {
                if(freq[val]>0)
                {
                    ans.push_back(val);
                    freq[val]--;
                }
            }
        }
        return ans;
    }
};