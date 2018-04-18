//
//  91.cpp
//  leetcode
//
//  Created by R Z on 2018/4/18.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int numDecodings(string s) {
        int len = s.length();
        if(!len) return 0;
        vector<int> dp(len+1);
        dp[0]=1;
        dp[1]=s[0]!='0'?1:0;
        for(int i=2;i<=len;i++){
            int first = s[i-1]-'0';
            int second = (s[i-2]-'0')*10+(s[i-1]-'0');
            if(first>=1 && first<=9) dp[i]+=dp[i-1];
            if(second>=10 && second<=26) dp[i]+=dp[i-2];
        }
        return dp[len];
    }
};
