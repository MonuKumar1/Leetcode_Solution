class Solution {
public:
    static bool cmp(vector<int>&v1,vector<int>&v2)
    {
        if(v1[0]==v2[0])
            return v1[1]<v2[1];
       return v1[0]>v2[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
     
        sort(people.begin(),people.end(),cmp);
        
        
        vector<vector<int>>v;
        
        
        for(int i=0;i<people.size();i++)
        {
            int ind=people[i][1];
            v.insert(v.begin() + ind, people[i]); 
        }
        return v;
        
    }
};