class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>hs;
        for(int i=0;i<knowledge.size();i++)
        {
            hs[knowledge[i][0]]=knowledge[i][1];
        }
        string tmp="";
        string ans="";
        bool open=false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                open=true;

            }
            else if(s[i]==')')
            {
                if(hs.count(tmp)>0)
                ans+=hs[tmp];
                else ans+='?';
                tmp="";
                open=false;
            }
            else if(open)tmp+=s[i];
            else
            ans+=s[i];

        }
        return ans;
    }
};