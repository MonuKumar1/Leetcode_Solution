class Solution {
public:
    int minDominoRotations(vector<int>& top, vector<int>& bottom) {
        int ans1=0,ans2=0,ans3=0,ans4=0;
        int x=top[0],y=bottom[0];
        int n=top.size();
        for(int i=0;i<n;i++){
            if(top[i]==x){if(top[i]==bottom[i]);
                else ans1++;}
            else if(bottom[i]==x)ans2++;
            else {
                ans1=INT_MAX/10;ans2=INT_MAX/10;
            }
            if(top[i]==y){if(top[i]==bottom[i]);
                          else ans3++;}
            else if(bottom[i]==y)ans4++;
            else {
                ans3=INT_MAX/10;ans4=INT_MAX/10;
            }
        }
        int ans=min({ans1,ans2,ans3,ans4});
        if(ans<INT_MAX/10)return ans;
        return -1;
        
    }
};