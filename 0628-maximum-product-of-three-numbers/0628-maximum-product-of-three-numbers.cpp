class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        int d=INT_MAX,e=INT_MAX;
        int n=nums.size();
        int mins=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)mins++;
            if(a<=nums[i])
            {
                
                c=b;
                b=a;
                a=nums[i];
                
            }
            else if(b<=nums[i])
            {
                c=b;
                b=nums[i];
            }
            else if(c<=nums[i])
            {
                c=nums[i];
            }

            if(d>=nums[i])
            {
                e=d;
                d=nums[i];
                
            }
            else if(e>=nums[i])
            {
                e=nums[i];
            }
             
        }
        int ans=a*b*c;
   
      ans=max(ans,e*d*a);
        

        return ans;
    }
};