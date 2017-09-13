//
//  566. Reshape the Matrix.cpp
//  leetcode
//
//  Created by R Z on 2017/8/27.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int col = nums[0].size();
        if(row*col != r*c){
            return nums;
        }
        
        vector<vector<int>> result(r);
        for(int i=0; i<r;i++){
            result[i].resize(c);
        }
        
        for(int i=0; i<row*col; i++){
            result[i/c][i%c] = nums[i/col][i%col];
        }
        //delete result;
        return result;
    }
};
