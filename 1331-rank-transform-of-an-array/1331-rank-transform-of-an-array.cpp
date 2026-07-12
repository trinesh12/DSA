class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>tmp;
        tmp=arr;

        sort(tmp.begin(),tmp.end());

        unordered_map<int,int>hs;
        int k=1;
        for(int i=0;i<n;i++)
        {
            if(hs.find(tmp[i])==hs.end())
            hs[tmp[i]]=k++;
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=hs[arr[i]];
        }
        return ans;
    }
};