class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int n=s.length();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(0);
            }
            else
            {
                if(st.empty())ans++;
                else st.pop();
            }
        }
        while(!st.empty())
        {
            ans++;
            st.pop();
        }
        return ans;
    }
};