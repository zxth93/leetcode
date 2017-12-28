//
//  494.cpp
//  leetcode
//
//  Created by R Z on 2017/12/28.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum=0;
        for(int num : nums) sum+=num;
        return sum<S||(S+sum)%2>0?0:subsetSum(nums, (S+sum)>>1);
    }
    int subsetSum(vector<int> &nums, int target){
        vector<int> dp(target+1, 0);
        dp[0]=1;
        for(int num : nums){
            for(int i=target; i>=num; i--) dp[i]+=dp[i-num];
        }
        return dp[target];
    }
};
