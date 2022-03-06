class Solution {
public:
    vector<string> cellsInRange(string s) {
        
         vector<string> ans;
        char a = s[0], b = s[3], x = s[1], y = s[4];
        for (a=s[0]; a <= b; ++a) {
            for (char i = x; i <= y; ++i) {
                ans.push_back(string(1, a) + string(1, i));
            }
        }
        return ans;
//         vector<string>ans;
//         int x=s[1]-'0';
//         int y=s[4]-'0';
        
//         int n=s[3]-s[0];
        
//         cout<<x<<" "<<y<<" "<<n<<endl;
        
//         for(int i=0;i<y-x;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 string temp=x+toString()
        
             
//              }
//         }
        
//         return ans;
        
        
    }
};