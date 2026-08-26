class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        

        int left=0,right=0;
        int n=s.length();
        int cnt=0;
        int minlen=INT_MAX;
        string ans="";
        string tmp="";
        int i=0,j=0;
        int maxcnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')maxcnt++;
        }
         if(maxcnt<k)return "";




        while(right<n)
        {
            if(s[right]=='1')
            {
            cnt++;
            
            }
            while(cnt>k)
            {
                if(s[left]=='1')cnt--;
                left++;
            }

            if(cnt==k)
            {
                //minlen=min(minlen,right-left);
                while(s[left]=='0')left++;
                //i=left;
                //j=right;
                 string cur=s.substr(left,right-left+1);

                if(ans=="" || cur.size()<ans.size() ||
                   (cur.size()==ans.size() && cur<ans))
                    ans=cur;
            }
           
            right++;
        }
        
        /*while(left<n && cnt<k)
        {
            if(s[left]=='1')
            {
                 i=left;
                j=right;
                //minlen=min(minlen,right-left);
                
                cnt--;


            }
           if(cnt==k)i=left;
            left++;
             


        }*/
       
       // while(i<n &&s[i]=='0')i++;
      /*  for(int k=i;k<=j;k++)
        {
            ans+=s[k];
        }*/
        return ans;
        



    }
};