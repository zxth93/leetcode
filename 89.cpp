//
//  89.cpp
//  leetcode
//
//  Created by R Z on 2018/8/15.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        for(int i=0;i< 1<<n;i++) res.push_back(i^ i>>1);
        return res;
    }
};
