//
//  73.cpp
//  leetcode
//
//  Created by R Z on 2018/3/21.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> tags;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0) tags.push_back(vector<int>{i,j});
            }
        }
        for(int k=0;k<tags.size();k++){
            int i=tags[k][0];
            int j=tags[k][1];
            for(int m=0;m<cols;m++) matrix[i][m]=0;
            for(int m=0;m<rows;m++) matrix[m][j]=0;
        }
    }
};
