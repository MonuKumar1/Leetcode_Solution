class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        unordered_map<int, int>mmap,mp1,mp2;
        for (int i=0; i<tops.size(); i++) {
            mmap[tops[i]]++;
            mmap[bottoms[i]]++;
            mp1[tops[i]]++;
            mp2[bottoms[i]]++;

        }
        int s = tops.size();
        if (mp1[tops[0]] == s || mp2[bottoms[0]] == s ) return 0;
        int mini=INT_MAX;
        
        int flag = 1;
        for (auto &x : mmap) {
     
            if (x.second >= s) {
                int count=0;
                int a=mp1[x.first];
                int b=mp2[x.first];
                if(a>b)
                {
                   for(int i=0;i<s;i++)
                   {
                       if((tops[i]!=x.first and bottoms[i]==x.first)) {
                           flag=0;
                           count++;
                       }
                       
                       if ((tops[i]!=x.first and bottoms[i]!=x.first)){
                           flag=1;
                           break;
                       }
                   }
                }
                else{
                    for(int i=0;i<s;i++)
                   {
                       if((bottoms[i]!=x.first and tops[i]==x.first)) {
                           flag=0;
                           count++;
                       }
                       else if((bottoms[i]!=x.first and tops[i]!=x.first)) {
                           flag=1;
                           break;
                       } 
                        
                        
                   }
                }
                
                mini=min(count,mini);
              }
            
            
            
            }
        
        
        return flag == 1 ? -1 : mini;
        
        
        
    }
};