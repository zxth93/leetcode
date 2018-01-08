//
//  221.cpp
//  leetcode
//
//  Created by R Z on 2018/1/8.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(!m) return 0;
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n,0));
        int maxsize=0;
        for(int i=0; i<m; i++) {
            dp[i][0]=matrix[i][0]-'0';
            maxsize=max(maxsize,dp[i][0]);
        }
        for(int j=0; j<n; j++) {
            dp[0][j]=matrix[0][j]-'0';
            maxsize=max(maxsize,dp[0][j]);
        }
        for(int i=1; i<m; i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]=='1'){
                    dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
                    maxsize=max(maxsize,dp[i][j]);
                }
            }
        }
        return maxsize*maxsize;
    }
};
