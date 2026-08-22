class Solution {
public:
    bool checkDivisibility(int n) {
        long long ds=0,dp=1;

        int tmp=n;

        while(tmp!=0)
        {
            int r=tmp%10;
            ds+=r;
            dp*=r;
            tmp/=10;
        }
        long long sm=ds+dp;
        if(n%sm==0)return true;
        return false;
    }
};