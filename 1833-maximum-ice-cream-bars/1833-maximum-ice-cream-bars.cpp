class Solution {
public:
    int maxIceCream(vector<int>& cost, int coins) {
        int mx=*max_element(cost.begin(),cost.end());
        int mn=*min_element(cost.begin(),cost.end());
        int n=cost.size();
        int k=mx-mn+1;

        vector<int>cnt(k,0);
        for(int i=0;i<n;i++)
        {
            cnt[cost[i]-mn]++;
        }

        for(int i=1;i<k;i++)
        {
            cnt[i]+=cnt[i-1];
        }

        vector<int>b(n);
        for(int i=n-1;i>=0;i--)
        {
            b[--cnt[cost[i]-mn]]=cost[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)

        {
           if(b[i]<=coins){
            ans++;
            coins-=b[i];
           }
        }
        return ans;



    }
};