//
//  598. Range Addition II.cpp
//  leetcode
//
//  Created by R Z on 2017/9/18.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()<1) return m*n;
        int row = ops[0][0];
        int col = ops[0][1];
        for(int i=0; i<ops.size();i++){
            if(row > ops[i][0]) row = ops[i][0];
            if(col > ops[i][1]) col = ops[i][1];
        }
        return row*col;
    }
};
