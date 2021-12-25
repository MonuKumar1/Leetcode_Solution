class Solution {
public:
    int calculate(string s) {
        int len=s.size();
        if(len==0) return 0;
        stack<int> st;
        int crn=0;
        char operation='+';
        for(int i=0;i<len;i++)
        {
            char crc=s[i];
            if(isdigit(crc)){
                crn=(crn*10)+(crc-'0');}
            
            if(!isdigit(crc) && !iswspace(crc) || i==len-1)
            {
                if(operation=='-'){
                    st.push(-crn);
                }
                else if(operation=='+')
                {
                    st.push(crn);
                }
                else if(operation=='*')
                {
                    int temp=st.top();
                    st.pop();
                    st.push(temp*crn);
                }
                else if(operation=='/')
                {
                    int temp=st.top();
                    st.pop();
                    st.push(temp/crn);
                }
                operation=crc;
                crn=0;
            }
        }
        int result=0;
        while(st.size()!=0){
            result+=st.top();
            st.pop();
        }
    return result;
    }
};