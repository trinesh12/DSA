class Solution {
public:
    
void f(int n, vector<string>& ans, string tmp, int open, int close)
{
    if (tmp.size() == 2 * n) {
        ans.push_back(tmp);
        return;
    }

    if (open < n) {
        f(n, ans, tmp + "(", open + 1, close);
    }

    if (close < open) {
        f(n, ans, tmp + ")", open, close + 1);
    }
}

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int cnt=3;
        

        f(n,ans,"",0,0);

        return ans;

    }
};