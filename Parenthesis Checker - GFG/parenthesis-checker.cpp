// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string expr)
    {
         stack<char> temp;
        for(int i=0;i<expr.length();i++)
        {
            if(temp.empty())
            {
                temp.push(expr[i]);
            }
            else if((temp.top()=='('&& expr[i]==')')  ||  (temp.top()=='{' && expr[i]=='}')  ||  (temp.top()=='[' && expr[i]==']'))
            {
                temp.pop();
            }
            else
            {
                temp.push(expr[i]);
            }
        }
        if(temp.empty())
        {
            return true;
        }
        return false;
        
        // stack<char>st;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(st.empty())
        //     st.push(s[i]);
        //     char t=st.top();
        //     if((t=='[' and s[i]==']') ||(t=='{' and s[i]=='}') ||(t=='(' and s[i]==')'))
        //     st.pop();
        //     else
        //     // if(s[i]=='[' || s[i]=='{' || s[i]=='(')
        //     st.push(s[i]);
        //     // else return false;
            
        // }
        // if(st.size())return false;
        // return true;
        // int n=x.length();

        // map<char,int>mp;
        //   for(int i=0;i<n;i++)
        //   mp[x[i]]++;
        
        // if(mp['(']==mp[')']&& mp['{']==mp['}']&&mp['[']==mp[']'])
        // return 1;
        // else return 0;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends