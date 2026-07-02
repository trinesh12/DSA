class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num<2)return true;
        int low=2,right=num/2;

        while(low<=right)
        {
            long long mid=low+(right-low)/2;
            if(mid*mid == num) return true;

           else  if(mid*mid < num)
            {
               low=mid+1;
            }
            else if(mid*mid > num) right=mid-1;
        }
        return false;
    }
};