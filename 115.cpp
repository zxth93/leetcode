//
//  115.cpp
//  leetcode
//
//  Created by R Z on 2018/4/19.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int numDistinct(string s, string t) {
        int m=t.length();
        int n=s.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        for(int i=0; i<=n; i++) dp[0][i]=1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(t[i]==s[j]) dp[i+1][j+1]=dp[i][j]+dp[i+1][j];
                else dp[i+1][j+1]=dp[i+1][j];
            }
        }
        return dp[m][n];
    }
};
