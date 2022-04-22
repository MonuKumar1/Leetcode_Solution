class MyHashMap {
public:
    vector<pair<int,int>>v;
    MyHashMap() {
        v.clear();
    }
    
    void put(int key, int value) {
        int j=key,l=0;
        for(auto &p:v)
        {
            if(p.first==key)
            {
                p.second=value;l=1;break;
            }
        }
        if(l==0)v.push_back(make_pair(key,value));
    }
    
    int get(int key) {
        // int j=key,l=0;
        for(auto &p: v)
        {
            if(p.first==key)
            {
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        // int j=key%1007,l=0;
        for(auto &p: v)
        {
            if(p.first==key)
            {
                p.second=-1;return;
            }
        }
        // if(l==0)return -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */