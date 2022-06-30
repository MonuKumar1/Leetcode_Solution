// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

   vector<string>ans;
    void solve(int ob,int cb,string str,int n){
        if(ob>n/2 || cb>(n) || ob>cb )return;
        
     if(str.size()==n)
         { ans.push_back(str);
          return;}
      solve(ob,1+cb,str+"1",n);
    if(str.size() )  solve(ob+1,cb,str+"0",n);
       
        
      
        
    }

	vector<string> NBitBinary(int N)
	{
// 	  if(N==1)
	  solve(0,0,"",N);
	  return ans;
	  
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends