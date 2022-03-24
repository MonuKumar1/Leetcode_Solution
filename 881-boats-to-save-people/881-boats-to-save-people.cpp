class Solution {
public:
//     int numRescueBoats(vector<int>& people, int limit) {
       
//         sort(people.begin(),people.end());
//         int c=0;
        
//         for(int i=0;i<people.size();i++)
//         {
//             int temp=0;
//             int flag=0;
//             while(i<people.size() and temp+people[i]<=limit)
//             {
//                 temp+=people[i];
//                 i++;
//                 flag=1;
                
//             }
//             if(flag)
//             i--;
//             cout<<temp<<" ";
//             c++;
//         }
//         return c;
//     }
int numRescueBoats(vector<int>& ppl, int limit, int boats = 0) {
  sort(begin(ppl), end(ppl));
  for (int i = 0, j = ppl.size() - 1; i <= j; ++boats, --j) {
    if (ppl[i] + ppl[j] <= limit) ++i;
  }
  return boats;
}
};