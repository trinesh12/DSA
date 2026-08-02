class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i=0,j=piles.size()-1;
        int alice=0,bob=0;
        bool turn=true;
        while(i!=j)
        {
            if(piles[i]>=piles[j])
            {
                if(turn)alice+=piles[i];
                else bob+=piles[i];
                i++;
            }
            else 
            {

                if(turn)alice+=piles[j];
                else bob+=piles[j];
                j--;
            }
        }

        if(alice>bob)return true;
        return false;
        
    }
};