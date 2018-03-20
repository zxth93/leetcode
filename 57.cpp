//
//  57.cpp
//  leetcode
//
//  Created by R Z on 2018/3/20.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
/**
 * Definition for an interval.*/
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        vector<Interval> res;
        auto it = intervals.begin();
        for(;it!=intervals.end();it++){
            if(newInterval.end<(*it).start) break;
            else if(newInterval.start>(*it).end) res.push_back(*it);
            else{
                newInterval.start=min(newInterval.start,(*it).start);
                newInterval.end=max(newInterval.end, (*it).end);
            }
        }
        res.push_back(newInterval);
        for(;it!=intervals.end();++it){
            res.push_back(*it);
        }
        return res;
    }
};
