//
//  72.cpp
//  leetcode
//
//  Created by R Z on 2018/4/10.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        for(int i=0; i<=m; i++) dp[i][0]=i;
        for(int j=1; j<=n; j++) dp[0][j]=j;
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                if(word1[i]==word2[j]) dp[i+1][j+1]=dp[i][j];
                else{
                    dp[i+1][j+1]=1+min(dp[i][j],min(dp[i][j+1],dp[i+1][j]));
                }
            }
        }
        return dp[m][n];
    }
};
