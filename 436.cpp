//
//  436.cpp
//  leetcode
//
//  Created by R Z on 2017/11/20.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <map>

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
    vector<int> findRightInterval(vector<Interval>& intervals) {
        
        vector<int> res;
        map<int, int> hash;
        for(int i=0;i<intervals.size();i++){
            hash[intervals[i].start]=i;
        }
        for(auto in : intervals){
            auto itr = hash.lower_bound(in.end);
            if(itr==hash.end()) res.push_back(-1);
            else res.push_back(itr->second);
        }
        return res;
    }
};
