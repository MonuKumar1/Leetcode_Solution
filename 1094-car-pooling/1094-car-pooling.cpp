class Solution {
public:
    bool carPooling(vector<vector<int>>& t, int capacity) {
        
//         int n=t.size();
//        int c=capacity-t[0][0];
//         int start= t[0][1];
//         int end =t[0][2];
        
//         for(int i=1;i<n;i++)
//         {   
//             if((end>t[i][1] and c+t[i][0]>capacity)||(end<t[i][1] and t[i][0]>capacity))
//             {
//                 return false;
//             }
//             else if(end>=t[i][1] and c+t[i][0]<capacity)
//             {
//                 c+=t[i][0];
//             }
            
//             if(end<=t[i][1] and t[i][0]<capacity)
//             {
//                 c=capacity-t[i][0];
//                 end=t[i][2];
//                 start=t[i][1];
//             }
            
                
//         }
//         return true;
        
        
        vector<int>stops(1001,0);
        for(auto x:t)
        {
            stops[x[1]]+=x[0];
            stops[x[2]]-=x[0];
            
        }
        
        for(int i=0;i<1001 and capacity>=0;i++)capacity-=stops[i];
        
        return capacity>=0;
        
    }
};