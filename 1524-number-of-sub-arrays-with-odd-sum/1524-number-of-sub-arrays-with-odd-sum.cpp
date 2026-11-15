class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        const int mod=1e9+7;
        int evencount=1,oddcount=0;
        int prefixSum=0;
       
        for(int i=0;i<n;i++)
        {
            prefixSum+=arr[i];

            if(prefixSum%2==0)
            {
                count+=oddcount;
                evencount++;
            }
            else
            {
                count+=evencount;
                oddcount++;
            }
            count=count%mod;
        }
        return count;
    }
};