class Solution {
public:
    int maxPalindromes(string s, int k) {
        int ans = 0;
        int n = s.size();
        int last_end = -1; // Tracks the end index of the last chosen palindrome

        for (int i = 0; i < n; i++) {
            // Check odd-length palindromes centered at i
            expand(s, i, i, k, last_end, ans);
            
            // Check even-length palindromes centered between i and i+1
            expand(s, i, i + 1, k, last_end, ans);
        }

        return ans;
    }

private:
    void expand(const string& s, int left, int right, int k, int& last_end, int& ans) {
        int n = s.size();
        
        while (left >= 0 && right < n && s[left] == s[right]) {
            int len = right - left + 1;
            
            // If valid length and starts AFTER the last chosen palindrome
            if (len >= k && left > last_end) {
                ans++;
                last_end = right; // Greedily select this palindrome
                break;            // Stop expanding this center
            }
            
            left--;
            right++;
        }
    }
};