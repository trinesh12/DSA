class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> hm;
        unordered_map<char, string> charToWord; 

        int n = s.length();
        int j = 0;
        string lastword = "";
        
        for (int i = 0; i < n;) {
            
            if (j >= pattern.length()) return false;

            string word = "";
            while (s[i] != ' ' && i < n) {
                word += s[i];
                lastword = word;
                i++;
            }
            
        
            if (hm.find(word) == hm.end()) {
                hm[word] = pattern[j];
            } else {
                if (hm[word] != pattern[j]) return false;
            }

        
            if (charToWord.find(pattern[j]) == charToWord.end()) {
                charToWord[pattern[j]] = word;
            } else {
                if (charToWord[pattern[j]] != word) return false;
            }

            i++;
            j++;
        }

        if (j != pattern.length()) return false;

        if (hm[lastword] != pattern[pattern.size() - 1]) return false;
        return true;
    }
};