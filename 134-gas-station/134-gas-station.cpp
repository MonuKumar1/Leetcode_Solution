class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {  
        int sum1=0,sum2=0;
        for(auto x:gas)sum1+=x;
        for(auto x:cost)sum2+=x;
        
        if(sum1<sum2)
            return -1;
        int total=0;
        int ind=0;
        for(int i=0;i<gas.size();i++)
        {
            total+=gas[i]-cost[i];
            if(total<0)
            {
                total=0;
                // ind=ind+1;
                ind=i+1;
                
            }
        }
        
        return ind;

    }
};
    