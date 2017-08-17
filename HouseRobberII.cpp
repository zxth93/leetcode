//
//  HouseRobberII.cpp
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
        vector<int> result;
        int rob(vector<int>& nums){
            int front = nums.front();
            int last = nums.back();
            nums.pop_back();
            nums.erase(nums.begin());
            int rs = rob_house(nums);
            return rs;
        }
        int rob_house(vector<int>& nums){
            int n = nums.size();
            if(n == 1){
                result.push_back(0);
                return nums[0];
            }

            if(n == 2){
                if(nums[0] < nums[1]){
                    result.push_back(1);
                    return nums[1];
                }
                result.push_back(0);
                return nums[0];
            }
            int *dp = (int*)malloc(sizeof(int)*n);
            int *last = (int*)malloc(sizeof(int)*n);
            int max = 0;
            int index = 0;
            for(int i=0;i<n;i++){
                dp[i]=nums[i];
                last[i]=-1;
                int imax=0;
                for(int j=0;j<i;j++){
                    if(i-j > 1){
                        if(imax < dp[j] + nums[i]){
                            dp[i] = dp[j] + nums[i];
                            imax = dp[i];
                            last[i] = j;
                        }
                    }

                    if(max < dp[i]){
                        max = dp[i];
                        index = i;
                    }
                }
            }

            do{
                result.push_back(index);
                index=last[index];
            }while(index != -1);

            free(last);
            free(dp);
            return max;
        }

};
