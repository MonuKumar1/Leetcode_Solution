bool cmp(const vector<int>& v1, const vector<int>& v2)
    {
     return v1[1] < v2[1];
    }
class Solution {

public:

    int scheduleCourse(vector<vector<int>>& courses) {
        
        if(courses.size() <= 0) return 0;
        
        sort(courses.begin(),courses.end(),cmp);
        
        priority_queue<int> q;
        
        int sum = 0;
        for(auto it : courses) {
            sum += it[0];
            q.push(it[0]);
            if(sum > it[1]) {
                sum -= q.top();
                q.pop();
            }
        }
        return q.size();
    }
};