class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();

        vector<int>cnt(26,0);

        for(int i=0;i<n;i++)
        {
            cnt[s[i]-'a']++;
        }

        string ans="";
        string od="";
        for(int i=0;i<26;i++)
        {
               if(cnt[i]%2==1)od=('a'+i);
           
                int c=cnt[i]/2;

                for(int j=0;j<c;j++)
                {
                    int ch='a'+i;
                    ans+=ch;
                }
        }

        ans+=od;


        int m=ans.length();
        if(n%2==1)m--;

        for(int i=m-1;i>=0;i--)
        {
           
            ans+=ans[i];
        }


    
    
    
    return ans;


    }
};