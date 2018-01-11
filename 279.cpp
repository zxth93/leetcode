//
//  279.cpp
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
    int numSquares(int n) {
        if(n<=0) return 0;
        vector<int> dp(n+1, INT_MAX);
        dp[0]=0;
        for(int i=1; i<n+1; i++){
            for(int j=1; j*j<=i; j++){
                dp[i]=min(dp[i], dp[i-j*j]+1);
            }
        }
        return dp[n];
    }
    
};
