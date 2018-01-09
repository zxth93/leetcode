//
//  264.cpp
//  leetcode
//
//  Created by R Z on 2018/1/9.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0) return 0;
        int t2=0, t3=0, t5=0;
        vector<int> dp(n);
        dp[0]=1;
        for(int i=1; i<n; i++){
            dp[i]=min(dp[t2]*2, min(dp[t3]*3, dp[t5]*5));
            if(dp[t2]*2==dp[i]) t2++;
            if(dp[t3]*3==dp[i]) t3++;
            if(dp[t5]*5==dp[i]) t5++;
        }
        return dp[n-1];
    }
};
