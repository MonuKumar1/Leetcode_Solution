class Solution {
public:
//   int ans=0;  
//     void help(vector<int>&v,int a,int b,int &cnt,int ind)
//     {
//         if(a<=0 and b<=0)return ;
//         cnt+=1;
//         ans=
//         if(v[ind]<=v[ind-1]){
//             return help(v,a,b,cnt,ind+1);
//         }
//         else if(a<=0)
//             return   help(v,a,b-1,cnt,ind+1);
//         else if(b<=0)
//              return  help(v,a-(v[ind]-v[ind-1]),b,cnt,ind+1);
            
            
//             ans= max(help(v,a-(v[ind]-v[ind-1]),b,cnt,ind++),
//                       help(v,a,b-1,cnt,ind++));
//         // return max(help(v,a))
//     }
    
    
    int furthestBuilding(vector<int>& a, int b, int l) {
        // int cnt=0;
        // int ans=help(h,b,l,cnt,1);
        // return cnt;
        int n=a.size();
        int i=0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
                pq.push(a[i+1]-a[i]);
            if(pq.size()>l)
            {
                int temp = pq.top();
                pq.pop();
                b-=temp;
                if(b<0)
                    break;
            }
        }
        return i;
        
        
    }
};