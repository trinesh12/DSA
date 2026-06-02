class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();
       int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {
           int  currTime=landStartTime[i]+landDuration[i];

                if(currTime<waterStartTime[j])currTime=waterStartTime[j];

                currTime+=waterDuration[j];
                ans=min(currTime,ans);
                
            }
        }
        for(int i=0;i<m;i++)
        {

          
            for(int j=0;j<n;j++)
            {
                 int  currTime=waterStartTime[i]+waterDuration[i];
                if(currTime<landStartTime[j])currTime=landStartTime[j];

                currTime+=landDuration[j];
                ans=min(currTime,ans);
                
            }
        }




            return ans;
    }
};