class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> s;
  for (auto i = 0, j = 0; i < pushed.size(); ++i) {
    s.push(pushed[i]);
    while (!s.empty() && s.top() == popped[j]) s.pop(), ++j;
  }
  return s.empty();
//         int n=pushed.size();
//         stack<int>s;
        
//         int i=0,j=0;
//         while(true)
//         {
//             if(i==n and s.top()!=popped[j])
//                 break;
            
//             if(s.top()!=popped[i] and i<n)
//             {
//                 s.push(pushed[i]);
//                 i++;
//             }
//             else if(s.top()==popped[j])
//             {
//                 s.pop();j++;
//             }
//         }
//         if(i!=n-1 || j!=n-1)return false;
    
//         return true;
    
    
    }
};