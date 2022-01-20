class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     
   
        int n=piles.size();
        sort(piles.begin(),piles.end());
   
        int high=piles[n-1]+1;
        int l=1;
    
    int count=0;
        while(l<=high)
        {
            int mini=(high+l)/2;
            count=0;
            for(int i=0;i<n;i++)
            {
                count+=ceil(1.0*piles[i]/mini);
                // cout<<count<<endl;
            }
            if(count>h)
            { 
                // j+=1;
                l=mini+1;
            }
           // else if(count<h)
           //      high=mini-1;
            else
                high=mini-1;
                // return mini;
                // return mini;
            
        }
        return l;
    }
};