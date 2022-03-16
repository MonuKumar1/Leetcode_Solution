class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length();
        string res = "";

        int cnt = 0;
        // iterating from beginnning
        for (int i = 0; i < s.length(); ++i)
        {
            // if we find and open parenthesis increase the cnt
            if (s[i] == '(')
                ++cnt;
            // if we found an close parenthisis
            // check if cnt == 0 , that means we have no earlier open parenthesis,
            // therefore replace that index by '#'
            else if (s[i] == ')')
            {
                if (cnt == 0)
                    s[i] = '#';
                // else decrease the cnt beacuse a valid pair is found
                else
                    --cnt;
            }
        }

        cnt = 0;
        // iterating from the end
        for (int i = n - 1; i >= 0; --i)
        {
            // if we find and close parenthesis increase the cnt
            if (s[i] == ')')
                ++cnt;
            // if we found an open parenthisis
            // check if cnt == 0 , that means we have no earlier close parenthesis,
            // therefore replace that index by '#'
            else if (s[i] == '(')
            {
                if (cnt == 0)
                    s[i] = '#';
                // else decrease the cnt beacuse a valid pair is found
                else
                    --cnt;
            }
        }

        // making the resultant string by excluding '#'
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != '#')
                res.push_back(s[i]);
        }

        return res;
//         int n=s.size();
//         vector<int>l,r;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='(')l.push_back(i);
//             else if(s[i]==')')r.push_back(i);
//         }
//         vector<int>v;
//         int i=0,j=0;
//         int x=l.size();
//         int y=r.size();
//         j =y;
//         while(i<x && j>=0){
//             if(l[i]<r[j]) {i++ ,j--;}
//             else break;
//         }
        
//         for(int k=i;i<x;i++)v.push_back(k);
//         for(int k=j;k>=0;k--)v.push_back(k);
//         // for(a)
//         // sort(v.begin(),v.end());
//         int k=0;
//         string ans="";
//         for(int p=0;p<n;p++)
//         {
//             if(p==v[p])k++;
//             else ans+=s[p];
//         }
//         return ans;
        
        
        // string ans="";
        // int i=0,j=n-1;
        // while(i<j)
        // {
        //     if(s[i]=='(' and s[j]==')')
        //     {
        //         i++;j--;
        //     }
        //     if(s[i]=='(' and s[j]!=')')
        //     {
        //         i++;j--;
        //     }
        // }
    }
};