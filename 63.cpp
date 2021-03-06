//
//  63.cpp
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
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1) return 0;
        vector<vector<int>> dp(m,vector<int>(n,0));
        dp[0][0]=1;
        for(int i=1; i<m; i++){
            if(obstacleGrid[i][0]==1||dp[i-1][0]==0) dp[i][0]=0;
            else dp[i][0]=1;
        }
        for(int j=1; j<n; j++){
            if(obstacleGrid[0][j]==1||dp[0][j-1]==0) dp[0][j]=0;
            else dp[0][j]=1;
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(obstacleGrid[i][j]==1) dp[i][j]=0;
                else dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
    
    int uniquePathsWithObstacles2(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1) return 0;
        vector<int> dp(n,0);
        dp[0]=1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(obstacleGrid[i][j]==1) dp[j]=0;
                else if(j>0) dp[j]+=dp[j-1];
            }
        }
        return dp[n-1];
    }
};
