class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     
        int n=numbers.size();
     
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(m.find(target-numbers[i])!=m.end())
            {
                return {m[target-numbers[i]]+1,i+1};
            }
            m[numbers[i]]=i;
        }
        
        


//         map<int,int>m;
//         for(int i=0;i<n;i++)
//         {
//             m[numbers[i]]=i;
//         }

//        for(auto it=m.begin();it!=m.end();it++)
//           {
//               int x=target-it->first;
//               auto it1=m.find(x);
//               if(it1!=m.end() and it1->second!=it->second) return {it->second+1,it1->second+1}; 
//           }
        return {-1,-1};
            
            
            
            
        // int l=0,h=n-1;
        // while(l<h)
        // {
        //     if(numbers[l]+numbers[h]==target) return {l,h};
        //     if(numbers[h]-numbers[l]>target)h--;
        //     else l++;
        // }
        // return {l-1,h};
        
    }
};