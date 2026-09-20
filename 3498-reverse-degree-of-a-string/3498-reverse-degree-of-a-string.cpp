class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
        int ans=0;

        for(int i=0;i<n;i++)
        {
            int j=s[i]-'a';
            j=(26-j)*(i+1);
            ans+=j;
        }
        return ans;
    }
};