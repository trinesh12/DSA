class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > 9*num)return "";
      
        int r=sum%9;

        string ans="";

        int nines=sum/9;
        while(nines) 
        {
        ans+='9';
        nines--;
        }
        if(r)
        ans+=(r+'0');

        while(ans.size()<num)
        {
            ans+='0';
        }
        return ans;



        


    }
};