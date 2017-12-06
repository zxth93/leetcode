//
//  240.cpp
//  leetcode
//
//  Created by R Z on 2017/12/6.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0||matrix[0].size()==0) return false;
        int rows = matrix.size();
        int cols = matrix[0].size()-1;
        int row = 0;
        while(cols>=0 && row < rows){
            if(matrix[row][cols]==target) return true;
            else if(matrix[row][cols]<target) row++;
            else cols--;
        }
        return false;
    }
};
