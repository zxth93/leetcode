//
//  416.cpp
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
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int num : nums) sum+=num;
        if((sum&1)==1) return false;
        sum /= 2;
        vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
        dp[0][0]=true;
        for(int i=1; i<n+1; i++) dp[i][0]=true;
        for(int j=1; j<sum+1; j++) dp[0][j]=false;
        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                dp[i][j]=dp[i-1][j];
                if(j>=nums[i-1]) dp[i][j]=dp[i][j] || dp[i-1][j-nums[i-1]];
            }
        }
        return dp[n][sum];
    }
};
