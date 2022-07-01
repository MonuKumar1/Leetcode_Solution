class Solution {
public:
    static bool cmp(vector<int>&v1,vector<int>&v2)
    {
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& box,int t ) {
        
        sort(box.begin(),box.end(),cmp);
        
        int ans=0;
        
        for(int i=0;i<box.size();i++)
        {
           while(box[i][0]>0 and t>0)
            {
               ans+=box[i][1];
                t--;
              box[i][0]--;
            }
            // else break;
        }
        return ans;
        
        
    }
};