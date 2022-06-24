// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    // int minEle;
    // stack<int> s;
     int topp=-1;
    vector<int> v;
    map<int,int> m;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           for(auto it:m){
        if(it.second>0)return it.first;
    }
    return -1;
           
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(topp<0)return -1;
            m[v[topp]]--;
            int temp=v[v.size()-1];
            v.pop_back();
            topp--;
            return temp;
                   //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
            m[x]++;
            v.push_back(x);
            topp++;
            return;
       }
};

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends