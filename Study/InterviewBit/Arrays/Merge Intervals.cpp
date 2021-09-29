/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval>ans;
    int n=intervals.size();
    int start=-1, end=-1, i, flag=1, include=0;
    for(i=0; i<n; i++) {
        if(intervals[i].end < newInterval.start)
            ans.push_back(intervals[i]);         
        else if(flag) {
            start = min(intervals[i].start, newInterval.start);
            while(i<n) {
                if(newInterval.end < intervals[i].start) {
                    include = 1;
                    end = newInterval.end;
                    flag = 0;
                    break;
                }
                else if(newInterval.end <= intervals[i].end) {
                    end = intervals[i].end;
                    flag=0;
                    break;
                }
                else if(i<n-1 && intervals[i+1].start>newInterval.end) {
                    end = newInterval.end;
                    flag=0;
                    break;
                }
                i++;
            }
            if(i==n) {
                end = newInterval.end;
                flag=0;
            }
            struct Interval mergedInt(start,end);
            ans.push_back(mergedInt);
            if(include)
                ans.push_back(intervals[i]);
        }
        else {
            ans.push_back(intervals[i]);
        }
    }
    if(flag) {
        ans.push_back(newInterval);
    }
    return(ans);
}
