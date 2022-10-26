class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]<0){
               int flag=0;
                while(st.size() ){
                    if(st.top()<abs(a[i]) && st.top()>0)st.pop();
                    else if(st.top()==abs(a[i]) && st.top()>0){
                        st.pop();flag=1;break;
                    }
                    else if(st.top()<0)break;
                    else{
                        flag=1;
                        break;
                    }
                }
                if(flag==0)st.push(a[i]);
            }
            else st.push(a[i]);
            
        }
        vector<int> ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};