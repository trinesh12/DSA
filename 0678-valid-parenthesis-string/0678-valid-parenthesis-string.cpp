class Solution {
public:
    bool checkValidString(string s) {
        int cnt=0;
        int n=s.length();

        stack<int>st;
        stack<int>as;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(st.empty())
                {
                    if(as.empty())return false;
                    else as.pop();
                }
                else
                st.pop();

            }
            else if(s[i]=='*'){
                as.push(i);
            }


        }
        
       while(!st.empty() && !as.empty())
       {
        if(st.top()>as.top())return false;
        st.pop();
        as.pop();
       }
       if(!st.empty())return false;
        return true;

    }
};