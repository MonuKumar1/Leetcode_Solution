class Solution {
public:
    bool isPossible(vector<int>& target) {
        
        
//         int n=t.size();
        
//         int sum=0;       
        
//         priority_queue<int>pq;
        
//         for(auto x:t){sum+=x;pq.push(x);}
        
//         if(n==2)return true;
        
//         while(1)
//         {
//             int temp=pq.top();
//             if(temp==sum)return true;
//             if(sum>1 and temp==1)return false;
//             // if(s)
//             sum-=temp;
//             if(sum<=0)return false;
//             pq.pop();
//             pq.push(1);
            
            
//         }
        
//     return true;
        
         priority_queue<int> pq;
        long long sum = 0;
        for(auto num : target){
            pq.push(num);
            sum+=num;
        }
        while(pq.top() != 1){
            sum -= pq.top();
            if(sum == 0 || sum >= pq.top()) return false;
            int old = pq.top()%sum;
            if(sum != 1 && old == 0) return false;
            pq.pop();
            pq.push(old);
            sum += (old);
        }
        return true;
        
        
        
        
//         while(1)
//         {
//             int x=pq.top();
//             pq.pop();
//             if(x==1)return true;
            
//             int y=pq.top();
//             pq.pop();
            
//             int temp=x-y;
//             if(temp<=0)return false;
            
//             pq.push(temp);
//             pq.push(y);
            
            
            
            
            
//         }
        
        
//         return false;
            
            
            
            
            
            
            
            
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int sum=n;
//         int i=0;
        
//         while(1)
//         {
            
//             int x=pq.top;
//               if(x==t[i])
//               {
//                   sum=2*sum -v[i];
//                   i++;
//                   pq.pop();
//                   pq.push()
//               }
                  
            
            
//         }
        
        
        
    }
};