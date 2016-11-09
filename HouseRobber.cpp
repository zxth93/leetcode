//
//  HouseRobber.cpp
//  leetcode
//
//  Created by R Z on 16/10/12.
//  Copyright © 2016年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
class Solution{
    public:
        int rob(vector<int>& nums){
            int n = nums.size();
            if(n == 1){
                return nums[0];
            }

            if(n == 2){
                if(nums[0] < nums[1]){
                    return nums[1];
                }
                return nums[0];
            }
            int *dp = (int*)malloc(sizeof(int)*n);
            int max = 0;
            for(int i=0;i<n;i++){
                dp[i]=nums[i];
                int imax=0;
                for(int j=0;j<i;j++){
                    if(i-j > 1){
                        if(imax < dp[j] + nums[i]){
                            dp[i] = dp[j] + nums[i];
                            imax = dp[i];
                        }
                    }

                    if(max < dp[i]){
                        max = dp[i];
                    }
                }
            }
            free(dp);
            return max;
        }
};
