class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
//         vector<int>v(n+1,0);
        
//         for(int i=0;i<trust.size();i++) v[trust[i][0]]=1;
        
//         int count=0;
//         for(int i=1;i<=n;i++)
//         {
//             if(v[i]==1)count++;
//         }
//         if(count!=n-1)return -1;
        
        
        if(trust.empty() && n==1)
            return 1;
		 
        
		vector<int> out(n+1,0);
		
        
		vector<int> in(n+1,0);
		
		
        
		for(auto edge : trust){
            out[edge[0]]++;
            in[edge[1]]++;
        }
		
		
        
		for(int i=0;i<=n;i++){
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
	
        return -1;
    }
        
    //     for(int i=1;i<=n;i++)   
    //     {  if(v[i]==-1){
    //             // count++;
    //         v[i]=1;
    //             ans=i;
    //         }
    //        // if(count>1)return -1;
    //     }
    //     // if(count>1)
    //     // return -1;
    // else{
    //     for(int i=0;i<trust.size();i++)
    //         if(trust[i][1]!=ans)return -1;
    // }
//     return ans;
        
//     }
};