//368
//  Largest Divisible Subset.cpp
//  leetcode
//
//  Created by R Z on 16/10/9.
//  Copyright © 2016年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
class Solution1{
    public:
        vector<int> largestDivisibleSubset(vector<int>& nums){
            if(nums.size()==1 || nums.size()==0){
                return nums;
            }

            sort(nums.begin(),nums.end());
            int n = nums.size();
            int* dp =(int*)malloc(sizeof(int)*n);
            int* last = (int*)malloc(sizeof(int)*n);

            int max=0,index=0;
            for(int i=0;i<n;i++){
                dp[i] = 1;
                last[i] = -1;
                int imax = 0;
                for(int j=0;j<i;j++){
                    if(nums[i]%nums[j] == 0){
                        if(imax<dp[j]+1){
                            imax = dp[j] + 1;
                            last[i] = j;
                        }
                        dp[i]=imax;
                    }
                }

                if(max<dp[i]){
                    max = dp[i];
                    index = i;
                }
            }

            vector<int> result;
            do{
                result.push_back(nums[index]);
                index = last[index];
            }while(index != -1);

            free(dp);
            free(last);
            return result;
        }
};
