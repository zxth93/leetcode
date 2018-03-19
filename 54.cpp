//
//  54.cpp
//  leetcode
//
//  Created by R Z on 2018/3/19.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int cicles = ((rows<cols?rows:cols)-1)/2+1;
        vector<int> res;
        res.clear();
        //if(rows==0) return res;
        for(int i=0; i<cicles; i++){
            for(int j=i;j<cols-i;j++) res.push_back(matrix[i][j]);
            for(int k=i+1;k<rows-i;k++) res.push_back(matrix[k][cols-i-1]);
            for(int m=cols-i-2; m>=i&&rows-i-1!=i;m--) res.push_back(matrix[rows-i-1][m]);
            for(int n=rows-i-2; n>i&&cols-i-1!=i;n--) res.push_back(matrix[n][i]);
        }
        return res;
    }
};
