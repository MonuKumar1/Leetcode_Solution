// class Solution {
// public:
// //     int sum(string s1,string s2)
// //     {
// //         int n=s1.size(); 
// //         int m=s2.size();
        
        
// //         if(s1==s2)return 1;
// //         if(n!=m)return 0;
// //         int count=0;
// //         for(int i=0;i<n;i++)
// //         {
// //             if(s1[i]-s2[i]==0)continue;
// //             if(abs(s1[i]-s2[i])==1)count++;
// //             if(count>1 || abs(s1[i]-s2[i])>1 )return 0;  
// //         }
        
// //         return 1;
// //     }
//     int ladderLength(string b, string e, vector<string>& list) {
        
//         int n=list.size();
//         int count=0;
        
//         for(int i=0;i<n ;i++)
//         {  
//             if(list[i]==e)
//             {count++;break;}
//           if(sum(b,list[i])==1){
              
//               b=list[i];
//               count++;
//           }
        
            
//         }
//         return count;
//     }
// };
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList)
    {
        if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())
            return 0;
        set<string> s;
        for(auto i:wordList)
            s.insert(i);
        queue<string> q;
        q.push(beginWord);
        int d=0;
        while(!q.empty())
        {
            d++;
            int n=q.size();
            while(n--)
            {
                string curr=q.front();
                q.pop();
                for(int i=0;i<curr.length();i++)
                {
                    string tmp=curr;
                    for(char c='a';c<='z';c++)
                    {
                        tmp[i]=c;
                        if(tmp==curr)
                            continue;
                        if(tmp==endWord)
                            return d+1;
                        if(s.find(tmp)!=s.end())
                        {
                            q.push(tmp);
                            s.erase(tmp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};