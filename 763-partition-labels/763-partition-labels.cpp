class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
      vector<int>end_ind(26,0),res;
        for(int i=0;i<n;i++)
        {
            end_ind[s[i]-'a']=i;
        }
        int start=0,end=0;
        for(int i=0;i<n;i++)
        {
            end=max(end_ind[s[i]-'a'],end);
            if(i==end)
            {
                res.push_back(end-start+1);
                start=i+1;
            }
        }
        return res;
    }
};
// class Solution {
// public:
//     vector<int> partitionLabels(string s) {
//         vector<int>v;
//         int i,j,k,l,m,n;
//         n=s.length();
//         unordered_map<char,int>um;
//         for(i=0;i<n;i++)
//         {
//             um[s[i]]++;
//         }
//         k=0;
//         for(i=0;i<n;i++)
//         {
//             um[s[i]]--;
//             if(um[s[i]]==0)
//             {
//                 for(j=0;j<=i;j++)
//                 {
//                     if(um[(s[j])]>0)break;
//                 }
//                 if(j==i+1){v.push_back(i+1-k);k=i+1;}
//             }
            
//         }
//         return v;
//     }
// };