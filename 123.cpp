//
//  123.cpp
//  leetcode
//
//  Created by R Z on 2018/3/30.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int hold2=INT_MIN, hold1=INT_MIN;
        int release2=0, release1=0;
        for(int n : prices){
            release2=max(release2, hold2+n);
            hold2=max(hold2, release1-n);
            release1=max(release1, hold1+n);
            hold1=max(hold1,-n);
        }
        return release2;
    }
};
