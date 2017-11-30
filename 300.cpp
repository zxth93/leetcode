//
//  300.cpp
//  leetcode
//
//  Created by R Z on 2017/11/30.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        if(len==0) return 0;
        vector<int> dp(len, 1);
        int res=1;
        for(int i=1; i<len; i++){
            for(int j=0; j<i; j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            res=max(res, dp[i]);
        }
        return res;
    }
};
