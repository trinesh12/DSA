class Solution {
public:
    int minChanges(string s) {
        int n=s.size();
        int ans=0;
        int ones=0,zeros=0;
        int i=0;
        int cnt=0;
       while(true)
       {
        if(i>=n)break;
        while(i<n&& s[i]=='1' )
        {
            cnt++;
            i++;
        }
        if(cnt%2==1)
        {
            ans++;
            cnt=1;
        }
        else cnt=0;
        while(i<n && s[i]=='0')
        {
            cnt++;
            i++;
        }
        if(cnt%2==1)
        {
            ans++;
            cnt=1;
        }
        else cnt=0;
       }
       return ans;
    }
};