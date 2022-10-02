class CustomStack {
public:
    vector<int>st;
    int maxSize;
    
    CustomStack(int maxSize2) {
      maxSize=maxSize2;
        
    }
    
    void push(int x) {
        if(st.size()<maxSize)
            st.push_back(x);
        
    }
    
    int pop() {
        if(st.size())
        { int x=st.back();
        st.pop_back();
        return x;}
        return -1;
     
        
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k and i<st.size();i++)
            st[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */