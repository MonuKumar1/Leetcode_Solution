class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        
        int k=f.size();
        if(k==1)
        {
            if(f[0]==0 and n<=1)return 1;
            else if(f[0]==1 and n==0)return 1;
            else return false;
           
        }
            
        int i=0;
        int count=0;
        while(i<k)
        {
            
            if(f[i]==0)
            {
                if(i==0 and i+1<k and f[i+1]==0)
                {
                    count++; f[i]=1;
                }
                else if(i==k-1 and i-1>=0 and f[i-1]==0)
                {
                    count++;f[i]=1;
                }
                else if(i-1 >=0 and i+1<k and f[i-1]==0 and f[i+1]==0)
                {
                    count++;f[i]=1;
                }
                
            }
            i++;
        }
        return count>=n;
        
    }
};