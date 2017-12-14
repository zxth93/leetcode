//
//  64.cpp
//  leetcode
//
//  Created by R Z on 2017/12/14.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> state(m,vector<int>(n, grid[0][0]));
        for(int i=1; i<m; i++)
            state[i][0] = state[i-1][0]+grid[i][0];
        for(int j=1; j<n; j++)
            state[0][j] = state[0][j-1]+grid[0][j];
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                state[i][j] = min(state[i-1][j], state[i][j-1]) + grid[i][j];
            }
        }
        return state[m-1][n-1];
    }
};
