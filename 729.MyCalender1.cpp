#include<bits/stdc++.h>
using namespace std;

class MyCalendar {
public:
    
    vector<pair<int,int>> vec;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        for(auto &it:vec)
        {
            if(it.first<end && it.second>start)
            {
                return false;
            }
        }
        
        vec.push_back({start,end});
        
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */