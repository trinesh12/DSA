
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        map<int, vector<int>> d;

        for (int x : nums) {
            int num = x;
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            d[sum].push_back(x);
        }

        vector<int> order;

        for (auto& p : d) {
            sort(p.second.begin(), p.second.end());

            for (int x : p.second) {
                order.push_back(x);
            }
        }

        unordered_map<int, int> hm;

        for (int i = 0; i < n; i++) {
            hm[nums[i]] = i;
        }

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != order[i]) {
                int idx = hm[order[i]];
                
                 hm[nums[idx]] = i;
                hm[nums[i]] = idx;
                swap(nums[i], nums[idx]);

               

                cnt++;
            }
        }

        return cnt;
    }
};
