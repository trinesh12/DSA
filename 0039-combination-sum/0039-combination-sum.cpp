class Solution {
public:
    vector<vector<int>>ans;
    void f(vector<int>& candidates, int idx,int target,vector<int>&comb,int n)
    {
        if(target==0)
        {ans.push_back(comb);
        return;
        }
        if(target<0 || idx>=n )return;
        
        comb.push_back(candidates[idx]);
        f(candidates,idx,target-candidates[idx],comb,n);
        comb.pop_back();
        f(candidates,idx+1,target,comb,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>comb;
        f(candidates,0,target,comb,n);

        return ans;
    }
};