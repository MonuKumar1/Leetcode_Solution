class Solution {
public:
    int fun(int i,int j,int turn,int pl1,vector<int>&v)
    {
        if( i==j )
        {
            if( turn ) return pl1+ v[i];
            return pl1 - v[j];
        }
        if(turn){
          
            int l= fun(i+1,j,0,pl1+v[i],v);
            int r=fun(i,j-1,0,pl1+v[j],v);
            
            return max(l,r);
        }
        else  { 
        
             int l= fun(i+1,j,1,pl1-v[i],v);
            int r=fun(i,j-1,1,pl1-v[j],v);
            
            return min(l,r);
        }
    }
    bool PredictTheWinner(vector<int>& v) {
        
        int ans=fun(0,v.size()-1,1,0,v);
        return ans>=0;
        
    }
};
