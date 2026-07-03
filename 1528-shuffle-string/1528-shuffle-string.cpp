class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
        string t="";
        for(int i=0;i<n;i++)
        {
            t+=" ";
        }
        for(int i=0;i<n;i++)
        {
            t[indices[i]]=s[i];
        }
        return t;
    }
};