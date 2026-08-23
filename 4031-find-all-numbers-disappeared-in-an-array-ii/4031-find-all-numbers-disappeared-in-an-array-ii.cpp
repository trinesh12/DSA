class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {


            int n=nums.size();
            vector<vector<int>>ans;
            
            int m=upper-lower+1;

            vector<int>vis(m,1);
            int mx=INT_MIN,mn=INT_MAX;

            for(int i=0;i<n;i++)
            {
                int idx=nums[i]-lower;
                if(idx>=0 && idx<m)
                {
                    vis[idx]=0;
                }
                mx=max(mx,nums[i]);
                mn=min(mn,nums[i]);
            }
            int start=-1;
           for(int i=0;i<m;i++)
           {

                if(vis[i]==1)
                    {
                        if(start==-1)
                        start=i;
                    }
                        else 
                            if(start!=-1) 
                            {ans.push_back({start+lower,i-1+lower});
                            start=-1;
                            }

           }
           if(start!=-1)
           {
                ans.push_back({start+lower,upper});
           }
                    return ans;



    }
                /*if(!vis[i])
                {
                    if(ones==1)
                    {
                        ans.push_back({start,start});
                    }
                    ans.push_back({start,lower+i-1});
                    start=start+i+1;
                    ones=0;
                }
                else ones++;*/
           



            

            /*
            sort(nums.begin(),nums.end());
            int a=-1,b=-1;
         /*   if(nums[0]>lower)
            {
               // if(nums[n-1]<upper)
                ans.push_back({lower,(nums[0]-1)});
                if(n==1)
                {
                    return {{lower,upper}};
                }
            }




        
            for(int i=0;i<n-1;i++)
            {
               if(nums[i+1]>=upper){
                if(lower>nums[i] && nums[i+1]>upper)
                {
                    return {{lower,upper}};
                }
                else break;
               }

                if((nums[i+1]-nums[i])==1)
                {
                    int x=nums[i]+1;
                    ans.push_back({x,x});
                }
                else if((nums[i+1]-nums[i])>1)
                {
                    
                    int a=nums[i]+1;
                    int b=nums[i+1]-1;
                    if(a<lower)a=lower;
                    b=min(upper,b);
                    ans.push_back({a,b});
                }
            }

            if(nums[n-1]<lower)
            {
                return {{lower,upper}};
            }
            if(nums[n-1]<upper)
            {
                int a=nums[n-1]+1;
                int b=upper;
                ans.push_back({a,b});
            }
        
            return ans;









           /* unordered_set<int>hs;
            int n=nums.size();

            for(int i=0;i<n;i++)
            {
                hs.insert(nums[i]);
            }

            vector<vector<int>>ans;

           int a=-1,b=-1;
            int i=lower;
            int outer=0;
           while(i<=upper)
           {
                if(a==-1)
                {
                    if(!hs.contains(i))
                    {
                        a=i;
                    }
                     
                }
                else
                {
                    if(!hs.contains(i))
                    {
                        outer=i;
                        
                    }
                    else if(hs.contains(i))
                    {
                        //outer=i;
                        ans.push_back({a,outer});
                        a=-1;
                        //b=-1;
                        
                    }
                }
                i++;
           }
        return ans;*/


            
    
};