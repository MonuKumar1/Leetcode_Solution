class MyCalendar {
public:
    vector<pair<int,int>>books;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        
        for (auto p : books)
            if (max(p.first, start) < min(end, p.second)) return false;
        books.push_back({start, end});
        return true;
//         if(v.empty()){
//             v.push_back({start,end});
//             return true;
//         }
//         sort(v.begin(),v.end());
        
//         // int ind=lower_bound(v[])
//         for(int i=0;i<v.size();i++)
//         {
//             // if(star<)
//             if(end<v[i].first)return true;
//             // if(start<v[i].second)return true;
            
//             if(start<v[i].second )
//                 return false;
//             if(end<v[i].first)return false;
//             if(i>0 and (start<v[i-1].second || end>v[i].first))
//             {
//                 return false;
//             }
           
//         }
       
//                 v.push_back({start,end});return true;
            
//         // return true;
    
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */