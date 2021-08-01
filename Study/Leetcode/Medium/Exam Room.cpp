class ExamRoom {  
public:
    
    struct comp{
        bool operator() (pair<int,int> a, pair<int,int> b) const {
            if(a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;
        }
    };
    
    set<pair<int, int>, comp> s;
    map<int,int> m,temp;
    int n;
    
    
    ExamRoom(int n) {
        this->n = n;
    }
    
    
    int seat() {
        if(this->s.empty()) {
            m[0] = 1;
            s.insert({n-1,n-1});
            temp[n-1] = 1;
            return 0;
        }
        auto it = s.begin();
        int count = it->first;
        int num = it->second;
        s.erase(it);
        temp[num] = 0;
        m[num] = 1;
        auto curr = m.find(num);
        map<int,int>::iterator itl, itr;
        itl = itr = m.end();
        if(curr != m.begin())
            itl = prev(curr);
        if(curr != m.end())
            itr = next(curr);
        if(itl != m.end()) {
            if(m.find((num+itl->first)/2) == m.end() && !temp[(num+itl->first)/2]) {
                s.insert({(num-itl->first)/2, (num+itl->first)/2});
                temp[(num+itl->first)/2] = 1;
            }
        }
        if(itr != m.end()) {
            if(m.find((itr->first+num)/2) == m.end() && !temp[(itr->first+num)/2]) {
                s.insert({(itr->first-num)/2, (itr->first+num)/2});
                temp[(itr->first+num)/2] = 1;            
            }
        }        
        return num;
    }
    
    
    void leave(int p) {
        auto curr = m.find(p);
        map<int,int>::iterator itl, itr;
        itl = itr = m.end();
        if(curr != m.begin())
            itl = prev(curr);
        if(curr != m.end())
            itr = next(curr);
        if(itl != m.end()) {
            s.erase({(curr->first-itl->first)/2,(curr->first+itl->first)/2});
            temp[(curr->first+itl->first)/2] = 0;
        }
        if(itr != m.end()) {
            s.erase({(itr->first-curr->first)/2,(itr->first+curr->first)/2});
            temp[(itr->first+curr->first)/2] = 0;
        }
        
        if(itl == m.end() && itr == m.end()) {
            temp.clear();
            s.clear();
        }
        m[p]=0;
        if(itl != m.end() && itr != m.end()) {
            if(!m[(itr->first+itl->first)/2] && !temp[(itr->first+itl->first)/2]) {
                s.insert({(itr->first-itl->first)/2,(itr->first+itl->first)/2});
                temp[(itr->first+itl->first)/2] = 1;
            }
        }
        else if(itr == m.end() && itl != m.end()) {
            if(!m[n-1] && !temp[n-1]) {
                s.insert({(n-1-itl->first),n-1});
                temp[n-1] = 1;
            }
        }
        else if(itl == m.end() && itr != m.end()) {
            if(!m[0] && !temp[0]) {
                s.insert({(itr->first),0});
                temp[0] = 1;
            }
        }
        m.erase(curr);
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(n);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */
