class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        
        int i=n-1;
        while(i>=0)
        {
            int c=num[i]-'0';
            if(c%2==0)
            {
                i--;
            }
            else break;
        }
        string ans="";
        for(int j=0;j<=i;j++)
        {
            ans+=num[j];
        }
        return ans;
    }
};