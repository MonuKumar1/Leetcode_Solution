class Solution {
public:
    int solve(vector<int>& bloomDay,int day,int k)
    {
        int result=0,count=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day)
                count++;
            else
                count=0;
            if(count==k)  
                result++,count=0;
        }
        return result;
    }
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int l=0,h=*max_element(bloomDay.begin(),bloomDay.end());
        int mid;
        int ans=-1;
        while(l<=h)			
        {
            mid=l+(h-l)/2;
            if(solve(bloomDay,mid,k)>=m)
            {
                ans=mid;
                 h=mid-1;
             
            
            }
            else
                   l=mid+1;
               
        }
        return ans;	
    }
};