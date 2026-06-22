class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>cnt(5,0);
        int n=text.length();

        for(int i=0;i<n;i++)
        {
            if(text[i]=='b')cnt[0]++;
            else if(text[i]=='a')cnt[1]++;
            else if(text[i]=='l')cnt[2]++;
            else if(text[i]=='o')cnt[3]++;
            else if(text[i]=='n')cnt[4]++;

            
        }
        cnt[2]/=2;
        cnt[3]/=2;
        int ans=*(min_element(cnt.begin(),cnt.end()));
        return ans;
    
    }
};