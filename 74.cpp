//
//  74.cpp
//  leetcode
//
//  Created by R Z on 2017/11/22.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0||matrix[0].size()==0) return false;
        int row = matrix.size();
        int col = matrix[0].size();
        int l=0, r=row*col-1;
        while(l<r){
            int mid=(l+r)/2;
            if(matrix[mid/col][mid%col]<target) l=mid+1;
            else r=mid;
        }
        return matrix[l/col][l%col]==target;
    }
};
