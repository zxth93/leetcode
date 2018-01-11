//
//  62.cpp
//  leetcode
//
//  Created by R Z on 2018/1/11.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n, 0));
        dp[0][0]=1;
        for(int i=1; i<m; i++) dp[i][0]=1;
        for(int j=1; j<n; j++) dp[0][j]=1;
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};
