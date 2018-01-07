//
//  516.cpp
//  leetcode
//
//  Created by R Z on 2018/1/7.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int len = s.length();
        if(len==0) return 0;
        vector<vector<int>> dp(len, vector<int>(len,0));
        for(int i=len-1; i>=0; i--){
            dp[i][i]=1;
            for(int j=i+1; j<len; j++){
                if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1]+2;
                else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            }
        }
        return dp[0][len-1];
    }
};