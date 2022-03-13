class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        for(int i=0;i<s.size();i++)
        {   
            if (S.empty())
            {
             if(s[i] == '(' || s[i] == '[' || s[i]=='{')
                S.push(s[i]);
                  else 
                return false;
            }
           else if(s[i] == '(' || s[i] == '[' || s[i]=='{')
                S.push(s[i]);
            
          
            
            else if( (s[i] == ')' && S.top() == '(') || (s[i] == ']' 
                                && S.top() == '[') || (s[i] == '}' 
                                      && S.top() == '{' )   )
                S.pop();
            else
                return false;
        }
        if(S.empty())
           return 1;
        else
            return 0;
    }
};