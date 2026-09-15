class Solution {
public:
    string longestPalindrome(string s) {
        
        int n =s.length();
        string ans="";
        for(int i=0;i<n;i++)
        {
            int left=i,right=i;
            int j=0;
        
            while((i-j) >=0 && (i+j) <n)
            {
               

                if(s[i-j]==s[i+j])
                {
                left=i-j;
                right=i+j;
                    j++;    
                }
                else break;
            }
            if(ans.size()<(right-left+1))
            {
                ans="";
            for(int start=left;start<=right;start++)
            {
                ans+=s[start];
            }
            }
            j=0;
            while((i-j)>=0 && (i+1+j)<n)
            {
                if(s[i-j]==s[i+j+1])
                {
                    left=i-j;
                    right=i+j+1;
                    j++;
                }
                else break;
            }
            if(ans.size()<(right-left+1))
            {
                ans="";
                for(int start=left;start<=right;start++)
            {
                ans+=s[start];
            }

            }
        }
        return ans;
    }
};