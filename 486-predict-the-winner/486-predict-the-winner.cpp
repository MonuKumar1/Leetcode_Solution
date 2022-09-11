// class Solution {
// public:
//     int fun(int i,int j,int turn,int pl1,vector<int>&v)
//     {
//         if(i>=j)return 0;
//         int pturn=turn?1:0;
//         if(turn){
          
//             int l= fun(i+1,j,0,pl1+v[i],v);
//             int r=fun(i,j-1,0,pl1+v[j],v);
            
//             return max(l,r);
//         }
//         else  { 
        
//              int l= fun(i+1,j,1,pl1-v[i],v);
//             int r=fun(i,j-1,1,pl1-v[j],v);
            
//             return min(l,r);
//         }
//     }
//     bool PredictTheWinner(vector<int>& v) {
//         int pl1=0,pl2=0;
        
//         int ans=fun(0,v.size()-1,1,0,v);
//         cout<<pl1<<"   "<<pl2<<endl;
//         return ans>=0;
        
//     }
// };
class Solution {
    public:    
   

   int fun(int start, int end, int p1, vector<int>&nums, bool p1Turn) {
        if( start== end )
            {
            if( p1Turn ) return p1+ nums[start];
            return p1 - nums[start];
            }
        
        
        if (p1Turn) {
            int bottom = fun(start + 1, end, p1 + nums[start], nums, false);
            int top = fun(start, end - 1, p1 + nums[end], nums, false);

            return max(top, bottom);
        } else {
            int bottom = fun(start + 1, end, p1 - nums[start], nums, true);
            int top = fun(start, end - 1, p1 - nums[end], nums, true);
            return min(bottom, top);
        }        
    } 
    
      bool PredictTheWinner(vector<int>& v) {
        return fun(0, v.size() - 1, 0, v, true) >= 0;
    }
};