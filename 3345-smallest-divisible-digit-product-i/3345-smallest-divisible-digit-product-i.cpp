class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=n;
        int ans=0;
        int product;
        while(1)
        {
            product=1;
            int tmp=num;
            while(tmp!=0)
            {
                int d=tmp%10;
                product*=d;
                tmp=tmp/10;
            }
            if(product%t==0)break;
            num++;
        }
        return num;
    }
};