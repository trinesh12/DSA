class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            int target_freq = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] == target) {
                    target_freq++;
                }
                
                int subarray_len = j - i + 1;
                if (2 * target_freq > subarray_len) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};