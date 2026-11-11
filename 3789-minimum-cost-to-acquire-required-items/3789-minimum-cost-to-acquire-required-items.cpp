class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        long long ans=0;
        int com=min(need1,need2);

        if(cost1+cost2>=costBoth)
        {
            com=min(need1,need2);
            long long add=(long long)costBoth*(long long)com;
            ans+=add;
            need1-=com;
            need2-=com;
           
        }
        else
        {
        long long tmp=min((long long)cost1*(long long)com+(long long)cost2*(long long)com,(long long)costBoth*(long long)com);
        ans+=tmp;

        need1-=com;
        need2-=com;

        
           
        }
        if(need1)
        
        {long long tmp=min((long long)cost1*(long long)need1,(long long)costBoth*(long long)need1);
        ans+=tmp;
        
        }
        else  {
            long long tmp=min((long long)cost2*(long long)need2,(long long)costBoth*(long long)need2);
        ans+=tmp;
        
        }

        return ans;

    }
};