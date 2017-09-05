//
//  53. Maximum Subarray.cpp
//  leetcode
//
//  Created by R Z on 2017/8/31.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return nums[0];
        }
        int sum = 0;
        int max = nums[0];
        
        for(int i=0; i<nums.size(); i++){
            //sum += nums[i];
            if(sum <= 0){
                sum = nums[i];
            }else{
                sum+= nums[i];
                
            }
            max = max > sum ? max:sum;
        }
        
        return max;
    }
};
